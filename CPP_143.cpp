string words_in_sentence(string sentence){
    string result = "";
    for (const auto& word : split(sentence, ' ')) {
        int len = word.length();
        bool isPrime = true;
        if (len > 1) {
            for (int i = 2; i * i <= len; ++i) {
                if (len % i == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime)
                result += word + " ";
        }
    }
    return result.substr(0, result.length() - 1);
}

string split(const string& str, char delimiter) {
    string s = str;
    size_t pos = 0;
    string token;
    vector<string> tokens;

    while ((pos = s.find(delimiter)) != string::npos) {
        token = s.substr(0, pos);
        s.erase(0, pos + 1);
        tokens.push_back(token);
    }

    tokens.push_back(s);

    return tokens.size() > 0 ? tokens[0] : "";
}