vector<string> split_words(string txt){
    vector<string> result;
    size_t found = txt.find(" ");
    if (found != string::npos) {
        size_t start = 0;
        while (found != string::npos) {
            result.push_back(txt.substr(start, found - start));
            start = found + 1;
            found = txt.find(" ", start);
        }
        result.push_back(txt.substr(start, txt.size() - start));
    } else {
        found = txt.find(",");
        if (found != string::npos) {
            size_t start = 0;
            while (found != string::npos) {
                result.push_back(txt.substr(start, found - start));
                start = found + 1;
                found = txt.find(",", start);
            }
            result.push_back(txt.substr(start, txt.size() - start));
        } else {
            int odd_lower_count = 0;
            for (char c : txt) {
                if (islower(c) && (c - 'a') % 2 == 1) {
                    odd_lower_count++;
                }
            }
            result.push_back(to_string(odd_lower_count));
        }
    }
    return result;
}