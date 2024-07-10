#include <vector>
#include <algorithm>

int search(std::vector<int> lst) {
    int maxFreq = -1;
    for (int num : lst) {
        int freq = std::count(lst.begin(), lst.end(), num);
        if (num > maxFreq && freq >= num) {
            maxFreq = num;
        }
    }
    return maxFreq;
}