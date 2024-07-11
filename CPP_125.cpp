vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0, prev_pos = 0;

    while (pos != string::npos) {
        pos = txt.find_first_of(" ,", prev_pos);
        if (pos == string::npos) {
            // No whitespaces or commas found
            int count = 0;
            for (char c : txt) {
                if (islower(c)) {
                    count++;
                }
            }
            result.push_back(to_string(count));
            break;
        }

        string word = txt.substr(prev_pos, pos - prev_pos);
        result.push_back(word);

        prev_pos = pos + 1;
    }

    return result;
}