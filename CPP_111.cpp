map<char, int> histogram(string test);
map<char, int> issame(const map<char, int>& a, const map<char, int>& b) {
    map<char, int> result;

    for (const auto& elem : a) {
        if (b.find(elem.first) != b.end() && b.at(elem.first) == elem.second) {
            result[elem.first] = elem.second;
        }
    }

    return result;
}

map<char, int> histogram(string test) {
    map<char, int> result;
    istringstream iss(test);
    string word;
    while (iss >> word) {
        for (char c : word) {
            result[c]++;
        }
    }
    int maxCount = 0;
    for (const auto& entry : result) {
        if (entry.second > maxCount) {
            maxCount = entry.second;
        }
    }
    map<char, int> maxCountLetters;
    for (const auto& entry : result) {
        if (entry.second == maxCount) {
            maxCountLetters[entry.first] = entry.second;
        }
    }
    return maxCountLetters;
}