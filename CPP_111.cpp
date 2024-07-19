map<char,int> histogram(string test){
    map<char,int> result;
    stringstream ss(test);
    string word;
    
    while (ss >> word) {
        for (char& c : word) {
            result[c]++;
        }
    }
    
    int max_count = 0;
    for (const auto& pair : result) {
        max_count = max(max_count, pair.second);
    }
    
    map<char,int> most_repeated;
    for (const auto& pair : result) {
        if (pair.second == max_count) {
            most_repeated[pair.first] = pair.second;
        }
    }
    
    return most_repeated;
}