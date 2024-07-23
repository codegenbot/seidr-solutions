map<char, int> histogram(string test) {
    map<char, int> freq;
    string word;
    for (char c : test) {
        if (c != ' ') {
            word += c;
        } else {
            for (char w : word) {
                freq[w]++;
            }
            word = "";
        }
    }
    for (char w : word) {
        freq[w]++;
    }
    
    map<char, int> result;
    int maxFreq = 0;
    for (const auto& entry : freq) {
        if (entry.second >= maxFreq) {
            maxFreq = entry.second;
            result[entry.first] = entry.second;
        }
    }
    
    return result;
}