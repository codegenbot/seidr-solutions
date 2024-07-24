#include <vector>
#include <algorithm>
#include <cassert>

int search(const std::vector<int>& lst) {
    int result = -1;
    for (int num : lst) {
        if (num > 0 && std::count(lst.begin(), lst.end(), num) >= num) {
            result = std::max(result, num);
        }
    }
    return result;
}

int main() {
    search(std::vector<int>{3, 10, 10, 9, 2});
    return 0;
}