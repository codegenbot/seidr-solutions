vector<string> split_words(string txt) {
    vector<string> result;

    size_t start = 0;
    while (start < txt.size()) {
        if (!isalnum(txt[start])) {
            size_t end = start + 1;
            while (end < txt.size() && !isalnum(txt[end])) {
                end++;
            }
            string word = txt.substr(start, end - start);
            if (word.find(',') != string::npos) {
                result.push_back(word.substr(0, word.find(',')));
                start = end + 1;
            } else {
                result.push_back(word);
                break;
            }
        } else {
            start++;
        }
    }

    if (result.empty()) {
        int count = 0;
        for (char c : txt) {
            if (islower(c)) {
                count += (int)c - 97; // ord('a') - 1
                if ((count & 1) == 1) {
                    result.push_back(to_string(count));
                    break;
                }
            }
        }
    }

    return result;
}