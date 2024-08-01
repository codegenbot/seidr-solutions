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
    vector<int> nums = {1, 11, 12, 13, 14, 15};
    int count = specialFilter(nums);
    cout << "Count: " << count << endl;
    return 0;
}