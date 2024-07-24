vector<string> split_words(string txt) {
    string word;
    vector<string> result;

    for (char c : txt) {
        if (isspace(c) || c == ',') {
            if (!word.empty()) {
                result.push_back(word);
                word.clear();
            }
        } else {
            word += c;
        }
    }

    if (!word.empty()) {
        result.push_back(word);
    } else {
        int count = 0;
        for (int i = 'a'; i <= 'z'; ++i) {
            if ((txt.find(char(i)) != string::npos) && (txt.find(char(i)) % 2 == 1))
                count++;
        }
        result.push_back(to_string(count));
    }

    return result;
}