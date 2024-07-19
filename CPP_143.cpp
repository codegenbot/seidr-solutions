string words_in_sentence(string sentence){
    string result = "";
    for(string word : split(sentence, " ")){
        if(is_prime(word.length())){
            result += word + " ";
        }
    }
    return result.substr(0, result.size() - 1);
}

vector<string> split(const string& str, const string& delim) {
    vector<string> tokens;
    size_t pos = 0;
    size_t prevPos = 0;
    while ((pos = str.find(delim, prevPos)) != string::npos) {
        tokens.push_back(str.substr(prevPos, pos - prevPos));
        prevPos = pos + delim.size();
    }
    tokens.push_back(str.substr(prevPos));
    return tokens;
}

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}