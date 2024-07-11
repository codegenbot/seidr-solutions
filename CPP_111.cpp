map<char, int> histogram(string test) {
    map<char, int> counts;
    for (char& c : test) {
        if (c != ' ') {
            counts[c]++;
        }
    }

    map<char, int> result;
    int maxCount = 0;
    for (const auto& pair : counts) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            result.clear();
            result.insert(pair);
        } else if (pair.second == maxCount) {
            result.insert(pair);
        }
    }

    return result;
}