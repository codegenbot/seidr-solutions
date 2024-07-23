#include <iostream>
#include <vector>

int main() {
    int count = 0;
    std::vector<int> nums;

    // Input vector from user
    std::cout << "Enter the numbers (space separated): ";
    for (int i; std::cin >> i; ) {
        nums.push_back(i);
    }

    // Process and count numbers
    for (int x : nums) {
        if (x == 0 || x % 11 != 0) {
            count++;
        }
    }

    // Print the result
    std::cout << "The number of special filtered numbers is: " << count << "\n";

    return 0;
}