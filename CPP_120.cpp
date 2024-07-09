```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool sameVec(std::vector<int> a, std::vector<int> b) {
    return a.size() == b.size() && a == b;
}

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::vector<int> result;
    for(int i = 0; i < k; i++) {
        auto it = std::max_element(arr.begin(), arr.end());
        result.push_back(*it);
        arr.erase(it);
    }
    return result;
}

int main() {
    std::vector<int> test = maximum({1, 2, 3, -23, 243, -400, 0}, 3);
    for (int i : test) {
        std::cout << i << " ";
    }
    assert(sameVec(test, {test[0], test[1], test[2]}));
    return 0;
}