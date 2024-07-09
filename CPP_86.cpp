string anti_shuffle(string s) {
    vector<string> words;
    string word = "";
    for (const auto& c : s) {
        if (c == ' ') {
            words.push_back(word);
            word = "";
        } else {
            word += c;
        }
    }
    words.push_back(word);

    unordered_map<string, int> wordCount;
    vector<string> tempWords;

    for (const auto& w : words) {
        if (wordCount.find(w) == wordCount.end()) {
            wordCount[w] = 0;
            tempWords.push_back(w);
        }
        wordCount[w]++;
    }

    string result = "";
    while (!tempWords.empty()) {
        int maxCount = 0;
        string maxWord = "";

        for (const auto& w : tempWords) {
            if (wordCount[w] > maxCount) {
                maxCount = wordCount[w];
                maxWord = w;
            }
        }

        result += maxWord + " ";
        wordCount[maxWord]--;
    }

    return result.substr(0, result.size() - 1);
}