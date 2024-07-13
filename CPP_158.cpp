string find_max(vector<string> words) {
    string result = words[0];
    for (int i = 1; i < words.size(); i++) {
        if (words[i].size() > result.size()) {
            result = words[i];
        } else if (words[i].size() == result.size()) {
            for (char c : words[i]) {
                if (result.find(c) == string::npos) {
                    result = words[i];
                    break;
                }
            }
        }
    }
    return result;
}