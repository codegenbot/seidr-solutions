string words_in_sentence(string sentence){
    string result = "";
    for(auto word : split(sentence, " ")) {
        if(is_prime(word.length())) {
            result += word + " ";
        }
    }
    return result.substr(0, result.size() - 1);
}

vector<string> split(const string& str, const string& delimiters) {
    vector<string> result;
    auto start = 0;
    for (auto end = 0; end <= str.size(); ++end) {
        if (str.find(delimiters, end) != string::npos) {
            result.push_back(str.substr(start, end - start));
            start = end + delimiters.size();
        }
    }
    return result;
}

bool is_prime(int num) {
    if(num < 2)
        return false;
    for(int i = 2; i*i <= num; ++i){
        if(num % i == 0)
            return false;
    }
    return true;
}