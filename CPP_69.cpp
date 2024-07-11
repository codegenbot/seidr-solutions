#include <vector>
#include <algorithm>

int search(vector<int> lst) {
    int maxFreq = 0;
    for (int num : lst) {
        if (num > 0 && count(lst.begin(), lst.end(), num) >= num) {
            return num;
        }
        maxFreq = max(maxFreq, count(lst.begin(), lst.end(), num));
    }
    return -1;