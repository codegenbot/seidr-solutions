bool issame(const map<char, int>& map1, const map<char, int>& map2);
map<char, int> histogram(string test);
int main() {
    // main function code here
}

bool issame(const map<char, int>& map1, const map<char, int>& map2) {
    return map1 == map2;
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