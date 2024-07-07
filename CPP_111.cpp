Here is the completed code:

map<char, int> histogram(string test) {
    map<char, int> result;
    int max_count = 0;

    for (string word : split(test)) {
        char c = word[0];
        int count = 1;
        for (char ch : word) {
            if (ch == c) {
                count++;
            } else {
                break;
            }
        }
        if (count > max_count) {
            max_count = count;
        }
        result[c] = count;
    }

    return result;
}

vector<string> split(string test) {
    vector<string> words;
    string word;

    for (char c : test) {
        if (c == ' ') {
            words.push_back(word);
            word.clear();
        } else {
            word += c;
        }
    }

    if (!word.empty()) {
        words.push_back(word);
    }

    return words;
}