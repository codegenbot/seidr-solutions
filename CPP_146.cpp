#include <iostream>
#include <vector>

int specialFilter(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    std::vector<int> nums;
    int num;

    // Read input from user
    cout << "Enter numbers (enter -1 to stop):" << endl;
    while ((cin >> num) && (num != -1)) {
        nums.push_back(num);
    }

    // Call the specialFilter function and print the result
    cout << "Count of filtered numbers: " << specialFilter(nums) << endl;

    return 0;
}