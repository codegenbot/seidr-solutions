string words_in_sentence(string sentence){
    string result = "";
    for (const auto& word : split(sentence, " ")) {
        int len = word.length();
        bool isPrime = true;
        if(len > 1) {
            for(int i=2; i*i <= len; i++) {
                if(len % i == 0) {
                    isPrime = false;
                    break;
                }
            }
            if(isPrime)
                result += word + " ";
        }
    }
    return result.substr(0, result.length() - 1);
}

vector<string> split(const string& str, const string& delimiter) {
    vector<string> tokens;
    size_t pos = 0;
    while ((pos = str.find(delimiter)) != string::npos) {
        tokens.push_back(str.substr(0, pos));
        str.erase(0, pos + delimiter.length());
    }
    tokens.push_back(str);
    return tokens;
}