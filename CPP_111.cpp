bool issame(map<char, int> a, map<char, int> b) {
    return a == b;
}

map<char, int> histogram(string test);

int main() {
    string test;
    getline(cin, test);
    map<char, int> result = histogram(test);
    for (const auto& pair : result) {
        cout << pair.first << " : " << pair.second << "\n";
    }
    return 0;
}

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
    for (const auto& pair : result) {
        maxCount = max(maxCount, pair.second);
    }
    map<char, int> maxChars;
    for (const auto& pair : result) {
        if (pair.second == maxCount) {
            maxChars[pair.first] = pair.second;
        }
    }
    return maxChars;
}