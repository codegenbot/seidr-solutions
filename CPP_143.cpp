string words_in_sentence(string sentence){
    string result = "";
    bool isPrime[100]; 
    for(int i=0; i<100; i++) {
        isPrime[i] = true;
    }
    for(int i=2; i*i<=100; i++) {
        if(isPrime[i]) {
            for(int j=i*2; j<=100; j+=i) {
                isPrime[j]=false;
            }
        }
    }

    vector<string> words = split(sentence, ' ');
    for(string word : words) {
        int len = word.length();
        if(isPrime[len-1]) {
            result += word + " ";
        }
    }
    return result.substr(0,result.size()-1);
}

vector<string> split(const string& str, char ch) {
    vector<string> tokens;
    string token;
    for (char c : str) {
        if (c == ch) {
            tokens.push_back(token);
            token = "";
        } else {
            token += c;
        }
    }
    tokens.push_back(token);
    return tokens;
}