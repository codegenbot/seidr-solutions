map<char,int> histogram(string test){
    map<char,int> result;
    istringstream iss(test);
    string word;
    while (iss >> word) {
        for (char& c : word) {
            result[c]++;
        }
    }
    int max_count = 0;
    for (const auto& entry : result) {
        max_count = max(max_count, entry.second);
    }
    map<char,int> max_chars;
    for (const auto& entry : result) {
        if (entry.second == max_count) {
            max_chars[entry.first] = entry.second;
        }
    }
    return max_chars;
}