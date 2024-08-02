string words_in_sentence(string sentence){
    string result = "";
    for(auto word : split(sentence, ' ')){
        if(is_prime(word.length())){
            result += word + " ";
        }
    }
    return result.substr(0, result.size()-1);
}

vector<string> split(const string& str, char delim) {
    vector<string> result;
    size_t pos = 0;
    size_t prev = 0;
    while ((pos = str.find(delim, prev)) != string::npos) {
        result.push_back(str.substr(prev, pos - prev));
        prev = pos + 1;
    }
    result.push_back(str.substr(prev));
    return result;
}

bool is_prime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}