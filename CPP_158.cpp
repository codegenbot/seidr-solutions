string find_max(vector<string> words) {
    string result = *words.begin();
    for (const auto& word : words) {
        if (word.length() > result.length()) {
            result = word;
        } else if (word.length() == result.length()) {
            size_t pos = 0, result_pos = 0;
            while ((pos = word.find(first_unique_char(word))) != string::npos && 
                   (result_pos = result.find(first_unique_char(result))) != string::npos) {
                if (pos < result_pos) {
                    result = word;
                    break;
                }
                pos = word.find(next_unique_char(word, pos));
                result_pos = result.find(next_unique_char(result, result_pos));
            }
        }
    }
    return result;
}

size_t first_unique_char(const string& str) {
    for (size_t i = 0; i < str.length(); ++i) {
        if (str.find(str[i]) == string::npos) {
            return i;
        }
    }
    return 0;
}

char next_unique_char(const string& str, size_t pos) {
    for (; pos < str.length(); ++pos) {
        if (str.find(str[pos]) == string::npos) {
            return str[pos];
        }
    }
    return '\0';
}