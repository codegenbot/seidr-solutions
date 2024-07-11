Here is the completed code:

string find_max(vector<string> words) {
    string maxWord = *words.begin();
    for (const auto& word : words) {
        if (word.size() > maxWord.size()) {
            maxWord = word;
        } else if (word.size() == maxWord.size()) {
            if (maxWord < word) {
                maxWord = word;
            }
        }
        size_t uniqueCharCount1 = 0, uniqueCharCount2 = 0;
        for (char c : maxWord) {
            if (uniqueCharCount1 == 0 || !std::isalpha(c)) {
                uniqueCharCount1++;
            } else if (!std::count(maxWord.begin(), maxWord.end(), tolower(c))) {
                uniqueCharCount1++;
            }
        }
        for (char c : word) {
            if (uniqueCharCount2 == 0 || !std::isalpha(c)) {
                uniqueCharCount2++;
            } else if (!std::count(word.begin(), word.end(), tolower(c))) {
                uniqueCharCount2++;
            }
        }
        if (uniqueCharCount1 < uniqueCharCount2) {
            maxWord = word;
        }
    }
    return maxWord;