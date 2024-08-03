map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) return result;

    string words[1000]; // Assuming no more than 1000 words
    size_t pos = 0;
    size_t lastPos = 0;
    while ((pos = test.find(" ")) != string::npos) {
        words[lastPos] = test.substr(0, pos);
        test.erase(0, pos + 1);
        lastPos++;
    }
    if (!test.empty()) {
        words[lastPos] = test;
    }

    for (const auto& word : words) {
        size_t count = 0;
        char letter = word[0];
        for (size_t i = 0; i < word.size(); ++i) {
            if (word[i] == letter) {
                count++;
            } else {
                break;
            }
        }
        if (result.find(letter) == result.end() || count > result[letter]) {
            result.clear();
            for (size_t i = 0; i < count; ++i) {
                result[letter]++;
            }
        } else if (count == result[letter]) {
            for (size_t i = 0; i < count; ++i) {
                result[letter]++;
            }
        }
    }

    return result;
}