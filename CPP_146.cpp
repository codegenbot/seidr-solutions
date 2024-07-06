#include <iostream>
#include <vector>

int specialFilter(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (std::abs(num) > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    std::vector<int> nums;
    int num;

    cout << "Enter numbers (0 to stop):" << endl;

    while (true) {
        cin >> num;
        if (num == 0)
            break;
        nums.push_back(num);
    }

    int count = specialFilter(nums);

    cout << "Count: " << count << endl;
    return 0;
}