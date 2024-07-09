#include <algorithm>

int search(const vector<int>& lst) {
    int result = -1;
    for (int num : lst) {
        if (count(lst.begin(), lst.end(), num) >= num && num > result) {
            result = num;
        }
    }
    return result;
}