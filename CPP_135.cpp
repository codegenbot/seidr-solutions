#include <vector>
#include <cassert>
#include <iostream>

int can_arrange(std::vector<int> arr) {
    for (int i = arr.size() - 1; i > 0; --i) {
        if (arr[i] < arr[i - 1]) {
            return i;
        }
    }
    return -1;
}

int main() {
    // Sample test cases
    assert(can_arrange({}) == -1);
    assert(can_arrange({3, 2, 1}) == 2);
    assert(can_arrange({1, 2, 3}) == -1);
    assert(can_arrange({1, 3, 2}) == 2);
    
    // User Input
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    for(int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }
    
    std::cout << can_arrange(arr) << std::endl;
    return 0;
}