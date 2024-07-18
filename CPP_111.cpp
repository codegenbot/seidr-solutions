map<char,int> histogram(string test){
    map<char,int> hist;
    for (char letter : test) {
        if (isalpha(letter) && islower(letter)) {
            hist[letter]++;
        }
    }
    int max_count = 0;
    for (const auto& entry : hist) {
        max_count = max(max_count, entry.second);
    }
    map<char,int> result;
    for (const auto& entry : hist) {
        if (entry.second == max_count) {
            result[entry.first] = entry.second;
        }
    }
    return result;
}