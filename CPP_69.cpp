Here is the completed code:

int search(vector<int> lst) {
    map<int, int> freq;
    for (int x : lst) {
        if (!freq.count(x)) freq[x] = 1;
        else freq[x]++;
    }
    for (auto p : freq) {
        if (p.first > 0 && p.second >= p.first) return p.first;
    }
    return -1;