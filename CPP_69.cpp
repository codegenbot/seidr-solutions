Here is the completed code:

#include <algorithm>

int search(vector<int> lst) {
    int max = -1;
    for (auto num : lst) {
        if (num > 0 && count(lst.begin(), lst.end(), num) >= num) {
            max = num;
            break;
        }
    }
    return max;
}