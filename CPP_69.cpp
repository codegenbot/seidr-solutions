#include <vector>

int search(vector<int> lst) {
    map<int, int> freq;
    for (int i : lst) {
        if (freq.find(i) == freq.end())
            freq[i] = 1;
        else
            freq[i]++;
    }
    for (auto p : freq) {
        if (p.first > 0 && p.second >= p.first)
            return p.first;
    }
    return -1;