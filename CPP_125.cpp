vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0, prev_pos = 0;
    
    while ((pos = txt.find_first_of(" ,")) != string::npos) {
        if (prev_pos == pos) {
            break;
        }
        
        if (txt.substr(prev_pos, pos - prev_pos).find_first_not_of(" ,") == string::npos) {
            result.push_back(txt.substr(prev_pos, pos - prev_pos));
            prev_pos = pos + 1;
        } else if (pos < txt.size() && txt[pos] == ',') {
            result.push_back(string(1, txt[pos]));
            prev_pos = pos + 1;
        } else {
            string word = txt.substr(prev_pos, pos - prev_pos);
            for (char& c : word) {
                if (c >= 'a' && c <= 'z' && (int(c) - ord('a')) % 2 != 0) {
                    result.clear();
                    result.push_back(to_string(word.length()));
                    return result;
                }
            }
        }
    }
    
    if (prev_pos < txt.size()) {
        string word = txt.substr(prev_pos);
        for (char& c : word) {
            if (c >= 'a' && c <= 'z' && (int(c) - ord('a')) % 2 != 0) {
                result.clear();
                result.push_back(to_string(word.length()));
                return result;
            }
        }
    }
    
    vector<string> words;
    for (char& c : txt) {
        if (c >= 'a' && c <= 'z' && (int(c) - ord('a')) % 2 != 0) {
            words.clear();
            words.push_back(to_string(txt.length()));
            return words;
        }
    }
    
    result.push_back(txt);
    return result;
}