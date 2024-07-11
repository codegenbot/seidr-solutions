vector<string> split_words(string txt){
        vector<string> result;
        string word = "";
        for (char c : txt) {
            if (c == ' ' || c == ',') {
                if (!word.empty()) {
                    result.push_back(word);
                    word = "";
                }
            } else {
                word += c;
            }
        }
        if (!word.empty()) {
            result.push_back(word);
        }
        if (result.size() == 1 && isalpha(result[0][0]) && islower(result[0][0])) {
            int count = result[0][0] - 'a';
            if (count % 2 != 0) {
                result[0] = to_string(count + 1);
            }
        }
        return result;
    }