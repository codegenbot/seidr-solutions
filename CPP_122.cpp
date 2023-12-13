#include <iostream>
#include <vector>
#include <cassert>

int add_elements(const std::vector<int>& arr, int k) {
    int sum = 0;
    for (int i = 0; i < k; i++) {
        if (arr[i] >= 10 && arr[i] <= 99) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    assert(add_elements({1}, 1) == 1);
    assert(add_elements({11, 22, 33, 44}, 4) == 110);
    assert(add_elements({5, 15, 25, 100}, 4) == 40);
    assert(add_elements({}, 0) == 0);
    assert(add_elements({10, 20, 30, 40, 50}, 5) == 150);
    assert(add_elements({111, 222, 333, 444}, 4) == 0);
    
    std::cout << "All test cases passed!" << std::endl;
    return 0;
}