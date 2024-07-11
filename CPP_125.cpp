vector<string> split_words(string txt){
    vector<string> result;
    int count_odd_lowercase = 0;
    bool has_whitespace = false;
    for (char& c : txt) {
        if (c == ' ' || c == ',') {
            has_whitespace = true;
            break;
        }
    }
    if (has_whitespace) {
        string word = "";
        for (char& c : txt) {
            if (c == ' ' || c == ',') {
                result.push_back(word);
                word = "";
            } else {
                word += c;
            }
        }
        if (!word.empty()) {
            result.push_back(word);
        }
    } else {
        for (char& c : txt) {
            if (islower(c) && (c - 'a') % 2 == 1) {
                count_odd_lowercase++;
            }
        }
        result.push_back(to_string(count_odd_lowercase));
    }
    return result;
}