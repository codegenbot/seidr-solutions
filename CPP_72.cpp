#include <vector>
#include <iostream>
#include <cassert>

bool will_it_fly(std::vector<int> q, int w) {
    int n = q.size();
    int sum = 0;

    // Check if the vector is palindromic
    for (int i = 0; i < n / 2; ++i) {
        if (q[i] != q[n - 1 - i]) {
            return false;
        }
    }

    // Calculate the sum of the elements
    for (int i = 0; i < n; ++i) {
        sum += q[i];
    }

    // Check if the sum is less than or equal to the maximum possible weight
    return sum <= w;
}

int main() {
    // Test cases
    std::vector<int> test_case1 = {1, 2, 3, 2, 1};
    std::vector<int> test_case2 = {1, 2, 2, 1};

    assert(will_it_fly(test_case1, 9) == true);
    assert(will_it_fly(test_case2, 6) == true);
    assert(will_it_fly(test_case2, 4) == false);

    std::cout << "All test cases passed!" << std::endl;

    return 0;
}