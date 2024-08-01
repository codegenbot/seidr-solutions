vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0;
    while ((pos = txt.find(' ')) != string::npos) {
        result.push_back(txt.substr(0, pos));
        txt.erase(0, pos + 1);
    }
    if (txt.empty()) {
        return result;
    }
    for (size_t i = 0; i < txt.size(); ++i) {
        if (!isalpha(txt[i])) {
            size_t j = i;
            while (j < txt.size() && !isalpha(txt[j])) {
                ++j;
            }
            if (j - i > 1) {
                result.push_back(to_string(j - i));
                break;
            }
            i = j - 1;
        }
    }
    if (result.empty()) {
        result.push_back(to_string(count_if(txt.begin(), txt.end(), ::islower)));
    }
    return result;
}