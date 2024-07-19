map<char, int> result;
    stringstream ss(test);
    string token;
    while (ss >> token) {
        for (char c : token) {
            result[c]++;
        }
    }
    int max_count = 0;
    for (const auto& entry : result) {
        max_count = max(max_count, entry.second);
    }
    map<char, int> res;
    for (const auto& entry : result) {
        if (entry.second == max_count) {
            res.insert(entry);
        }
    }
    return res;
}