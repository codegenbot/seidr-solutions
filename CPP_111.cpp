map<char, int> histogram(string test) {
    map<char, int> result;
    map<char, int> count;

    // Count the occurrences of each letter
    for (char c : test) {
        if (c != ' ') {
            count[c]++;
        }
    }

    // Find the maximum occurrence
    int maxOccurrence = 0;
    for (auto it : count) {
        if (it.second > maxOccurrence) {
            maxOccurrence = it.second;
        }
    }

    // Add letters with maximum occurrence to the result map
    for (auto it : count) {
        if (it.second == maxOccurrence) {
            result[it.first] = it.second;
        }
    }

    return result;
}