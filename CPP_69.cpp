#include <vector>
#include <climits>

int search(const vector<int>& lst) {
    int maxFreq = INT_MIN;
    for (int num : lst) {
        int freq = 0;
        for (int n : lst) {
            if (n == num) {
                freq++;
            }
        }
        if (num > freq && freq > maxFreq) {
            maxFreq = freq;
        }
    }
    return maxFreq > 0 ? maxFreq : -1;
}