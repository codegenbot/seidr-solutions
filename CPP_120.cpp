#include <vector>
#include <algorithm>
#include <functional>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    // Your implementation here
}

std::vector<int> kMaxElements(std::vector<int> arr, int k) {
    std::sort(arr.begin(), arr.end(), std::greater<int>());
    arr.resize(k);
    return arr;
}

int main() {
    std::vector<int> arr = {3, 1, 4, 1, 5, 9, 2, 6, 5};
    int k = 4;
    assert(issame(std::max_element(arr.begin(), arr.end()), std::vector<int>{}));
    std::vector<int> result = kMaxElements(arr, k);
    for (int num : result) {
        std::cout << num << " ";
    }
    return 0;
}