map<char, int> histogram(string test){
    map<char, int> freq;
    for (char c : test) {
        if (c != ' ') {
            freq[c]++;
        }
    }
    map<char, int> result;
    int maxFreq = 0;
    for (auto it = freq.begin(); it != freq.end(); ++it) {
        if (it->second >= maxFreq) {
            maxFreq = it->second;
            result[it->first] = it->second;
        }
    }
    return result;
}