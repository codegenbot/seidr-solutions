map<char,int> histogram(string test){
    map<char,int> result;
    map<char,int> counts;
    istringstream iss(test);
    string word;
    while (iss >> word) {
        for (char& c : word) {
            counts[c]++;
        }
    }
    int maxCount = 0;
    for (const auto& p : counts) {
        if (p.second > maxCount) {
            maxCount = p.second;
        }
    }
    for (const auto& p : counts) {
        if (p.second == maxCount) {
            result[p.first] = p.second;
        }
    }
    return result;
}