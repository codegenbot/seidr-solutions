int maxStart(vector<int>& arr) {
    int n = arr.size();
    map<int, int> freq;
    for (int x : arr) {
        if (freq.find(x) == freq.end()) {
            freq[x] = 1;
        } else {
            freq[x]++;
        }
    }
    int res = -1;
    for (auto p : freq) {
        if (p.second >= p.first && p.first > 0) {
            res = p.first;
            break;
        }
    }
    return res;