map<char, int> hist;
    string word = "";
    for (char c : test) {
        if (c == ' ') {
            if (!word.empty()) {
                for (char letter : word) {
                    hist[letter]++;
                }
                word = "";
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        for (char letter : word) {
            hist[letter]++;
        }
    }
    int max_occurrence = 0;
    for (const auto& entry : hist) {
        max_occurrence = max(max_occurrence, entry.second);
    }
    map<char, int> result;
    for (const auto& entry : hist) {
        if (entry.second == max_occurrence) {
            result[entry.first] = entry.second;
        }
    }
    return result;