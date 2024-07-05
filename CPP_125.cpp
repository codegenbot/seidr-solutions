vector<string> split_words(string txt) {
    vector<string> result;
    if (txt.find(' ') != string::npos) {
        stringstream ss(txt);
        string word;
        while (ss >> word) {
            result.push_back(word);
        }
    } else if (txt.find(',') != string::npos) {
        size_t pos = 0;
        while ((pos = txt.find(',')) != string::npos) {
            result.push_back(txt.substr(0, pos));
            txt.erase(0, pos + 1);
        }
        result.push_back(txt);
    } else {
        int odd_count = 0;
        for (char ch : txt) {
            if (islower(ch) && (ch - 'a') % 2 != 0) {
                odd_count++;
            }
        }
        result.push_back(to_string(odd_count));
    }
    return result;
}