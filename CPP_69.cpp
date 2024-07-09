#include <iostream>
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
    std::vector<int> numbers = {3, 10, 10, 9, 2};
    assert(search(numbers) == -1);
    return 0;
}