map<char, int> histogram(string test) {
    map<char, int> frequency;
    int maxFrequency = 0;
    for (char c : test) {
        if (c != ' ') {
            frequency[c]++;
            maxFrequency = max(maxFrequency, frequency[c]);
        }
    }
    map<char, int> result;
    for (const auto& it : frequency) {
        if (it.second == maxFrequency) {
            result[it.first] = it.second;
        }
    }
    return result;
}