vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos;
    
    // Split on whitespace
    pos = txt.find(' ');
    if (pos != string::npos) {
        size_t start = 0;
        while ((pos = txt.find(' ', start)) != string::npos) {
            result.push_back(txt.substr(start, pos - start));
            start = pos + 1;
        }
        result.push_back(txt.substr(start));
        return result;
    }
    
    // Split on commas
    pos = txt.find(',');
    if (pos != string::npos) {
        size_t start = 0;
        while ((pos = txt.find(',', start)) != string::npos) {
            result.push_back(txt.substr(start, pos - start));
            start = pos + 1;
        }
        result.push_back(txt.substr(start));
        return result;
    }
    
    // No whitespaces or commas, count lower-case letters with odd order
    int odd_count = 0;
    for (char c : txt) {
        if (c >= 'a' && c <= 'z' && ((c - 'a') % 2 == 1)) {
            odd_count++;
        }
    }
    
    result.push_back(to_string(odd_count));
    return result;
}