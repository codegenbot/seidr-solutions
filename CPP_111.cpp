map<char, int> histogram(string test) {
    map<char, int> result;

    // Count the occurrence of each letter
    for (char c : test) {
        if (c != ' ') {
            result[c]++;
        }
    }

    // Find the maximum occurrence
    int maxCount = 0;
    for (auto it : result) {
        if (it.second > maxCount) {
            maxCount = it.second;
        }
    }

    // Create a new map with letters having the maximum occurrence
    map<char, int> maxOccurrences;
    for (auto it : result) {
        if (it.second == maxCount) {
            maxOccurrences[it.first] = it.second;
        }
    }

    return maxOccurrences;
}