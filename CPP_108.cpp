#include <vector>

using namespace std;

int count_nums(const vector<int>& nums) {
    int count = 0;
    for (const auto& num : nums) {
        int sign = (num < 0) ? -1 : 1;
        long absNum = labs(num);
        int sum = 0;
        while (absNum > 0) {
            sum += absNum % 10;
            absNum /= 10;
        }
        if (sign * sum > 0) {
            count++;
        }
    }
    return count;
}