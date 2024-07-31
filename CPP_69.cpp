#include <vector>

int search(std::vector<int> nums) {
    int result = -1;
    for (int num : nums) {
        int freq = 0;
        for (int i : nums) {
            if (i == num) {
                freq++;
            }
        }
        if (num > 0 && freq >= num && num > result) {
            result = num;
        }
    }
    return result;
}