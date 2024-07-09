#include <vector>
#include <algorithm>
#include <cassert>

void sort_array(std::vector<int>& arr) {
    if (!arr.empty()) {
        if ((arr.front() + arr.back()) % 2 == 0) {
            std::sort(arr.begin(), arr.end(), std::greater<int>());
        } else {
            std::sort(arr.begin(), arr.end());
        }
    }
}

bool issame(std::vector<int> a, std::vector<int> b) {
    sort_array(a);
    return a == b;
}

int main() {
    std::vector<int> arr1 = {21, 14, 23, 11};
    std::vector<int> arr2 = {23, 21, 14, 11};
    assert(issame(arr1, arr2));
    return 0;
}