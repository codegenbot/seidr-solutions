string find_max(vector<string> words){
    string result = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        });
    for (int i = 0; i < result.length(); i++) {
        bool unique = true;
        for (const auto& word : words) {
            if (word.find(result[i]) != string::npos) {
                unique = false;
                break;
            }
        }
        if (!unique) {
            return *max_element(words.begin(), words.end(),
                [](const string& a, const string& b) {
                    if (a.length() == b.length()) {
                        return a < b;
                    }
                    return a.length() > b.length();
                });
        }
    }
    return result;
}