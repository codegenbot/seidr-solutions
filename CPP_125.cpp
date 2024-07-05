vector<string> split_words(string txt){
    vector<string> result;
    size_t pos = 0;
    if ((pos = txt.find(' ')) != string::npos) {
        while ((pos = txt.find(' ')) != string::npos) {
            result.push_back(txt.substr(0, pos));
            txt.erase(0, pos + 1);
        }
        result.push_back(txt);
    } else if ((pos = txt.find(',')) != string::npos) {
        while ((pos = txt.find(',')) != string::npos) {
            result.push_back(txt.substr(0, pos));
            txt.erase(0, pos + 1);
        }
        result.push_back(txt);
    } else {
        int odd_count = 0;
        for (char c : txt) {
            if (islower(c) && (c - 'a') % 2 == 0) {
                odd_count++;
            }
        }
        result.push_back(to_string(odd_count));
    }
    return result;
}