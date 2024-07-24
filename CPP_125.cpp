vector<string> split_words(string txt) {
    vector<string> result;

    int i = 0;
    while (i < txt.length()) {
        if (!isalnum(txt[i])) {
            string word = txt.substr(i);
            while (word.length() > 0 && !isalnum(word[0])) {
                word.erase(0, 1);
            }
            result.push_back(word);
            i += word.length();
        } else {
            int j = i;
            while (j < txt.length() && isalnum(txt[j])) {
                j++;
            }
            string word = txt.substr(i, j - i);
            if (word.find(',') != string::npos) {
                result.push_back(word.substr(0, word.find(',')));
                i = j + 1;
                break;
            } else {
                result.push_back(word);
                i = j;
            }
        }
    }

    return result.empty() ? vector<string>({"" + to_string(txt.length() - txt.find_first_not_of("abcdefghijklmnopqrstuvwxyz"))}) : result;
}