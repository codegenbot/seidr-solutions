#include <algorithm>

int search(vector<int> lst) {
    int maxVal = -1;
    for (int num : lst) {
        int freq = count(lst.begin(), lst.end(), num);
        if (freq >= num && num > maxVal) {
            maxVal = num;
        }
    }
    return maxVal;
}