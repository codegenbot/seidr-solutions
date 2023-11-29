#include <vector>

int count_nums(vector<int> n){
    int count = 0;
    for (int i = 0; i < n.size(); i++) {
        int sum = 0;
        int num = n[i];
        while (num != 0) {
            sum += abs(num % 10);
            num /= 10;
        }
        if (sum > 0) {
            count++;
        }
    }
    return count;
}

int main() {
    // Test cases
    vector<int> nums1 = {123, -456, 789};
    int result1 = count_nums(nums1);
    // Expected output: 3

    vector<int> nums2 = {0, 0, 0};
    int result2 = count_nums(nums2);
    // Expected output: 0

    vector<int> nums3 = {1, -2, 3, -4, 5};
    int result3 = count_nums(nums3);
    // Expected output: 5

    return 0;
}