map<char, int> histogram(string test) {
    map<char, int> frequency;
    istringstream iss(test);
    string word;
    while (iss >> word) {
        for (char c : word) {
            frequency[c]++;
        }
    }

    map<char, int> result;
    int maxCount = 0;
    for (const auto& pair : frequency) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            result.clear();
            result[pair.first] = pair.second;
        } else if (pair.second == maxCount) {
            result[pair.first] = pair.second;
        }
    }

    return result;
}