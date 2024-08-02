Here is the completed code:

string words_in_sentence(string sentence){
    string result = "";
    int n = 0;
    for(int i=2; i<=10000; i++){
        if(isPrime(i)){
            n++;
        }
        else break;
    }

    vector<string> primeWords;
    string temp = "";
    for(auto word: split(sentence, ' ')){
        if(word.length() <= n){
            temp += word + " ";
            primeWords.push_back(word);
        }
    }

    return result + temp.substr(0, temp.size()-1);
}

vector<string> split(string s, char ch) {
    vector<string> ar;
    string temp = "";
    for (auto c: s) {
        if (c == ch) {
            ar.push_back(temp);
            temp = "";
        } else {
            temp += c;
        }
    }
    ar.push_back(temp);
    return ar;
}

bool isPrime(int num) {
    if(num <= 1) return false;
    for(int i=2; i*i<=num; i++){
        if(num%i == 0) return false;
    }
    return true;
}