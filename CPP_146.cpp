#include <vector>

int specialFilter(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    vector<int> nums = {1, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int count = specialFilter(nums);
    cout << "The number of integers in the range [10, 20] that are not divisible by 2 is: " << count;
    return 0;
}