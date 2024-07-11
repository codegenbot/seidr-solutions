#include <vector>
#include <algorithm>

int search(const std::vector<int>& lst) {
    int ans = -1;
    for (int num : lst) {
        if (num > ans && std::count(lst.begin(), lst.end(), num) >= num) {
            ans = num;
        }
    }
    return ans;
}