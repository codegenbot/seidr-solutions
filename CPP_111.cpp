map<char, int> freq;
    stringstream ss(test);
    string word;
    while (ss >> word) {
        for (char& c : word) {
            freq[c]++;
        }
    }
    int max_count = 0;
    for (const auto& p : freq) {
        max_count = max(max_count, p.second);
    }
    map<char, int> result;
    for (const auto& p : freq) {
        if (p.second == max_count) {
            result[p.first] = p.second;
        }
    }
    return result;
}