```
#include <iostream>
#include <vector>
#include <algorithm>

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
    int test[] = {1, 2, 3, -23, 243, -400, 0};
    std::vector<int> testVector(test, test + sizeof(test) / sizeof(test[0]));
    for (int i : maximum(testVector, 3)) {
        std::cout << i << " ";
    }
    return 0;
}