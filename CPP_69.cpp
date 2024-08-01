int search(int n) {
    map<int, int> freq;
    for (int i = 1; i <= n; i++) {
        if (freq.find(i) == freq.end()) {
            freq[i] = 1;
        } else {
            freq[i]++;
        }
    }

    int result = -1;
    for (auto p : freq) {
        if (p.second >= p.first && p.first > 0) {
            result = p.first;
            break;
        }
    }

    return result;
}