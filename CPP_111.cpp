map<char, int> histogram(string test){
    map<char, int> frequency;
    stringstream ss(test);
    string word;
    while (ss >> word) {
        for (char& c : word) {
            frequency[c]++;
        }
    }
    int max_count = 0;
    for (const auto& pair : frequency) {
        max_count = max(max_count, pair.second);
    }
    map<char, int> result;
    for (const auto& pair : frequency) {
        if (pair.second == max_count) {
            result[pair.first] = pair.second;
        }
    }
    return result;
}