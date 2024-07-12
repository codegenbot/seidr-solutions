#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums;
    int count = 0;

    // Read input from user
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums.push_back(num);
    }

    // Count the numbers that satisfy the condition
    for (int num : nums) {
        if (abs(num) > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0) {
            count++;
        }
    }

    // Print the output
    cout << "Count: " << count << endl;

    return 0;
}