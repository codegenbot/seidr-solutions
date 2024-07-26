bool issame(string s1, string s2);
map<char, int> histogram(string test);

bool issame(string s1, string s2) {
    return s1 == s2;
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
    for (const auto &entry : result) {
        maxCount = max(maxCount, entry.second);
    }
    map<char, int> maxOccurrences;
    for (const auto &entry : result) {
        if (entry.second == maxCount) {
            maxOccurrences[entry.first] = entry.second;
        }
    }
    return maxOccurrences;
}

int main() {
    // Main function implementation
    return 0;
}