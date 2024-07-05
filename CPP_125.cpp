vector<string> split_words(string txt){
    vector<string> result;
    size_t pos;
    
    // Check if there are whitespaces in the input string
    if ((pos = txt.find(' ')) != string::npos) {
        size_t start = 0;
        while((pos = txt.find(' ', start)) != string::npos) {
            result.push_back(txt.substr(start, pos - start));
            start = pos + 1;
        }
        result.push_back(txt.substr(start));
    }
    // Check if there are commas in the input string
    else if ((pos = txt.find(',')) != string::npos) {
        size_t start = 0;
        while((pos = txt.find(',', start)) != string::npos) {
            result.push_back(txt.substr(start, pos - start));
            start = pos + 1;
        }
        result.push_back(txt.substr(start));
    }
    // If no whitespaces or commas, count lower-case letters with odd order
    else {
        int odd_count = 0;
        for (char c : txt) {
            if ('a' <= c && c <= 'z' && ((c - 'a') % 2 == 1)) {
                odd_count++;
            }
        }
        result.push_back(to_string(odd_count));
    }
    
    return result;
}