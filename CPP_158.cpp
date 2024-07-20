string find_max(vector<string> words){
    string max_str = *max_element(words.begin(), words.end(), 
        [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        });
    
    int max_unique = 0;
    for (int i = 0; i < max_str.length(); i++) {
        bool unique = true;
        for (int j = 0; j < words.size(); j++) {
            if ((words[j].find(max_str[i]) != string::npos) &&
                (max_str[i] == words[j][i])) {
                unique = false;
                break;
            }
        }
        if (unique) max_unique++;
    }
    
    for (int i = 0; i < words.size(); i++) {
        int unique_count = 0;
        for (int j = 0; j < words[i].length(); j++) {
            bool present = false;
            for (int k = 0; k < words.size(); k++) {
                if ((words[k].find(words[i][j]) != string::npos) &&
                    (words[i][j] == words[k][j])) {
                    present = true;
                    break;
                }
            }
            if (!present) unique_count++;
        }
        if (unique_count > max_unique) {
            max_str = words[i];
            max_unique = unique_count;
        }
    }
    
    return max_str;
}