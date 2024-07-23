#include <iostream>
#include <vector>

bool isSpecialFiltered(int x) {
    if (x == 0 || x % 11 != 0)
        return true;
    else
        return false;
}

int countSpecialFiltered(const std::vector<int>& nums) {
    int count = 0;
    for (int x : nums) {
        if (isSpecialFiltered(x)) {
            count++;
        }
    }
    return count;
}

int main() {
    int count = 0;
    std::vector<int> nums;

    // Input vector from user
    std::cout << "Enter the numbers (space separated): ";
    for (int i; std::cin >> i; ) {
        nums.push_back(i);
    }

    // Print the result
    std::cout << "The number of special filtered numbers is: " << countSpecialFiltered(nums) << "\n";

    return 0;
}