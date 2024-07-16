vector<string> split_words(string txt){
    vector<string> result;
    size_t pos = txt.find(' ');
    if (pos != string::npos) {
        size_t start = 0;
        while (pos != string::npos) {
            result.push_back(txt.substr(start, pos - start));
            start = pos + 1;
            pos = txt.find(' ', start);
        }
        result.push_back(txt.substr(start));
    } else {
        pos = txt.find(',');
        if (pos != string::npos) {
            size_t start = 0;
            while (pos != string::npos) {
                result.push_back(txt.substr(start, pos - start));
                start = pos + 1;
                pos = txt.find(',', start);
            }
            result.push_back(txt.substr(start));
        } else {
            int odd_count = 0;
            for (char c : txt) {
                if (islower(c) && ((c - 'a') % 2 == 1)) {
                    odd_count++;
                }
            }
            result.push_back(to_string(odd_count));
        }
    }
    return result;
}