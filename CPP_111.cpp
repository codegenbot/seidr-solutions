map<char, int> histogram(string test) {
    map<char, int> result;
    string word;
    int maxCount = 0;

    for (char c : test) {
        if (c == ' ') {
            if (!word.empty()) {
                if (++result[word] > maxCount) {
                    maxCount = result[word];
                }
                word.clear();
        } else {
            word += c;
        }
    }

    if (!word.empty() && ++result[word] > maxCount) {
        maxCount = result[word];
    }

    map<char, int> finalResult;

    for (auto it = result.begin(); it != result.end(); ++it) {
        if (it->second == maxCount) {
            finalResult[it->first] = it->second;
        }
    }

    return finalResult;
}