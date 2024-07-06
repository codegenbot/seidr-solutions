#include <iostream>
#include <vector>
#include <algorithm>

int search(std::vector<int> lst) {
    int max = -1;
    for (auto num : lst) {
        if (num > 0 && std::count(lst.begin(), lst.end(), num) >= num) {
            max = num;
            break;
        }
    }
    return max;
}

int main() {
    assert(search({3, 10, 10, 9, 2}) == -1);
    return 0;
}