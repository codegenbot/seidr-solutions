int search(int n) {
    vector<int> lst;
    for (int i = 1; i <= n; ++i) {
        if (i * i <= n) {
            lst.push_back(i * i);
        } else {
            lst.push_back(n + 1);
            break;
        }
    }
    map<int, int> freq;
    for (int num : lst) {
        if (freq.find(num) == freq.end()) {
            freq[num] = 1;
        } else {
            freq[num]++;
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