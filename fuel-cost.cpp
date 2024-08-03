#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums;
    int n;

    // Read integers until the end of file is reached (EOF)
    for(int n; std::cin >> n;) {
        nums.push_back(n);
    }

    int sum = 0;
    for (int num : nums) {
        sum += num / 3 - 2;
    }

    std::cout << sum << std::endl;

    return 0;
}