map<char, int> histogram(string test){
    map<char, int> count;
    istringstream iss(test);
    string word;
    while (iss >> word) {
        for (char c : word) {
            count[c]++;
        }
    }
    map<char, int> result;
    int maxCount = 0;
    for (auto it = count.begin(); it != count.end(); ++it) {
        if (it->second > maxCount) {
            maxCount = it->second;
            result.clear();
            result[it->first] = it->second;
        } else if (it->second == maxCount) {
            result[it->first] = it->second;
        }
    }
    return result;
}