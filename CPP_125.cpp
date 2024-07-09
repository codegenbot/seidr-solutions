vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0, prev = 0;
    
    while ((pos = txt.find_first_of(" ,.")) != string::npos) {
        if (pos == 0 || txt[pos - 1] != ' ') {
            prev = pos;
        }
        
        string word = txt.substr(prev, pos - prev);
        result.push_back(word);
        
        prev = pos + 1;
    }
    
    if (prev < txt.size()) {
        result.push_back(txt.substr(prev));
    } else if (result.empty()) {
        int count = 0;
        for (char c : txt) {
            if (c >= 'a' && c <= 'z') {
                count++;
                if ((count - 1) % 2 == 0) {
                    result.push_back(to_string(count));
                    break;
                }
            }
        }
    }
    
    return result;
}