vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0, prev_pos = 0;
    
    while ((pos = txt.find_first_of(" ,")) != string::npos) {
        if (pos == 0) {
            // Split on commas if no whitespace exists
            result.push_back(txt.substr(0, pos));
            txt.erase(0, pos + 1);
            prev_pos = pos;
        } else if (prev_pos != pos) {
            // Split on whitespace if commas exist
            result.push_back(txt.substr(prev_pos, pos - prev_pos));
            txt.erase(pos, 1);
            prev_pos = pos;
        }
    }
    
    if (!txt.empty()) {
        // Count lower-case letters with odd order in the alphabet
        int count = 0;
        for (char c : txt) {
            if (c >= 'a' && c <= 'z' && (int)c % 2 == 1) {
                count++;
            }
        }
        result.push_back(to_string(count));
    } else {
        // No whitespaces or commas, return a vector with one element
        result.push_back("0");
    }
    
    return result;
}