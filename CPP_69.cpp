int search(vector<int> lst) {
    map<int, int> freq;
    for (int num : lst) {
        if (freq.find(num) == freq.end()) {
            freq[num] = 1;
        } else {
            freq[num]++;
        }
    }
    int maxFreq = -1;
    for (pair<int, int> p : freq) {
        if (p.second >= p.first && p.first > 0) {
            maxFreq = p.first;
            break;
        }
    }
    return maxFreq;
}