map<char, int> histogram(string test) {
    map<char, int> freq;
    stringstream ss(test);
    string token;
    while (ss >> token) {
        for (char c : token) {
            freq[c]++;
        }
    }
    int max_freq = 0;
    for (const auto& p : freq) {
        max_freq = max(max_freq, p.second);
    }
    map<char, int> result;
    for (const auto& p : freq) {
        if (p.second == max_freq) {
            result[p.first] = p.second;
        }
    }
    return result;
}