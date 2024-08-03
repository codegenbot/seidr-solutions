#include <vector>
#include <algorithm>

int search(const std::vector<int>& lst) {
    int result = -1;
    for (int num : lst) {
        if (num > 0 && std::count(lst.begin(), lst.end(), num) >= num && num > result) {
            result = num;
        }
    }
    return result;
}