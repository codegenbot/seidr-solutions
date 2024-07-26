map<char, int> histogram(string test) {
    map<char, int> result;
    
    istringstream iss(test);
    string word;
    while (iss >> word) {
        for (char c : word) {
            result[c]++;
        }
    }
    
    int max_count = 0;
    for (auto it : result) {
        max_count = max(max_count, it.second);
    }
    
    map<char, int> res;
    for (auto it : result) {
        if (it.second == max_count) {
            res[it.first] = it.second;
        }
    }
    
    return res;
}