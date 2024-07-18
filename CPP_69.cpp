#include <vector>
#include <algorithm>

int search(std::vector<int> lst) {
    int result = -1;
    for (int num : lst) {
        int freq = std::count(lst.begin(), lst.end(), num);
        if (num > 0 && freq >= num && num > result) {
            result = num;
        }
    }
    return result;
}