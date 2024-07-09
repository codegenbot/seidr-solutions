#include <vector>
#include <algorithm>

int search(vector<int> lst) {
    int max = -1;
    for (auto num : lst) {
        if (num > 0 && num <= count(lst.begin(), lst.end(), num)) {
            max = num;
        } else if (max != -1) {
            return max;
        }
    }
    return max;