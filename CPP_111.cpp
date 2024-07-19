map<char, int> histogram(string test){
    map<char, int> result;
    stringstream ss(test);
    string token;
    while (ss >> token) {
        for (char& c : token) {
            result[c]++;
        }
    }
    int max_count = 0;
    for (const auto& pair : result) {
        max_count = max(max_count, pair.second);
    }
    map<char, int> most_repeated_chars;
    for (const auto& pair : result) {
        if (pair.second == max_count) {
            most_repeated_chars[pair.first] = pair.second;
        }
    }
    return most_repeated_chars;
}