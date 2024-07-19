map<char, int> histogram(string test) {
    map<char, int> result;
    map<char, int> count;

    for (char c : test) {
        if (c != ' ') {
            count[c]++;
        }
    }

    int maxOccurrence = 0;
    for (const auto& pair : count) {
        maxOccurrence = max(maxOccurrence, pair.second);
    }

    for (const auto& pair : count) {
        if (pair.second == maxOccurrence) {
            result[pair.first] = pair.second;
        }
    }

    return result;
}