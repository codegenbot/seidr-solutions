string words_in_sentence(string sentence){
    string result = "";
    int n = 0;
    for(int i=2; ;i++){
        if(isPrime(i)){
            n++;
            if(n > sentence.size()) break;
        }
    }
    for(auto word : split(sentence, " ")) {
        if(word.size() == n) {
            result += word + " ";
        }
    }
    return result.substr(0, result.size()-1);
}

vector<string> split(const string& str, const string& delimiter) {
    vector<string> tokens;
    size_t pos = 0;
    while ((pos = str.find(delimiter)) != string::npos) {
        tokens.push_back(str.substr(0, pos));
        str.erase(0, pos + delimiter.size());
    }
    tokens.push_back(str);
    return tokens;
}

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}