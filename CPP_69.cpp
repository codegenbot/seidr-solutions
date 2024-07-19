Here is the completed code:

int search(vector<int> lst) {
    map<int, int> freq;
    for (int x : lst) {
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