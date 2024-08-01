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
    vector<int> nums = {1, 12, 13, 14, 15, 16};
    int count = specialFilter(nums);
    cout << "The number of elements that meet the condition is: " << count << endl;
    return 0;
}