#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> result;
    while (n != 1) {
        result.push_back(n);
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
    }
    result.push_back(1);
    std::vector<int> oddNumbers;
    for (int num : result) {
        if (num % 2 != 0) {
            oddNumbers.push_back(num);
        }
    }
    std::sort(oddNumbers.begin(), oddNumbers.end());
    return oddNumbers;
}

int main() {
    // Test the function
    std::vector<int> test_result = get_odd_collatz(20);
    for (int num : test_result) {
        std::cout << num << " ";
    }
    return 0;
}