#include <vector>

int search(vector<int> lst) {
    map<int, int> freq;
    for (int i : lst) {
        freq[i]++;
    }
    for (auto p = freq.begin(); p != freq.end(); ++p) {
        if (p->second >= p->first) {
            return p->first;
        }
    }
    return -1;