bool issame(string s1, string s2);
map<char, int> histogram(string test);

int main() {
    string test;
    getline(cin, test);
    map<char, int> result = histogram(test);
    for (const auto &entry : result) {
        cout << entry.first << " " << entry.second << endl;
    }
    return 0;
}

bool issame(string s1, string s2) {
    if (s1.size() != s2.size()) {
        return false;
    }
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
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