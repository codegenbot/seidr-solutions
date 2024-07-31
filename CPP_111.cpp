bool issame(map<char, int> a, map<char, int> b) {
    for (const auto& entry_a : a) {
        if (b.find(entry_a.first) == b.end() || b[entry_a.first] != entry_a.second) {
            return false;
        }
    }
    for (const auto& entry_b : b) {
        if (a.find(entry_b.first) == a.end() || a[entry_b.first] != entry_b.second) {
            return false;
        }
    }
    return true;
}


map<char, int> histogram(string test);

map<char, int> histogram(string test) {
    map<char, int> result;
    istringstream iss(test);
    string word;
    while (iss >> word) {
        for (char& c : word) {
            result[c]++;
        }
    }
    int maxCount = 0;
    for (const auto& entry : result) {
        maxCount = max(maxCount, entry.second);
    }
    map<char, int> mostRepeated;
    for (const auto& entry : result) {
        if (entry.second == maxCount) {
            mostRepeated[entry.first] = entry.second;
        }
    }
    return mostRepeated;
}