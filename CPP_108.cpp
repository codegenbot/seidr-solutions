#include <vector>
#include <algorithm>

int count_nums(std::vector<int> v) {
    int count = 0;
    for (int num : v) {
        if (num >= 0) {
            int sum = 0;
            while (num > 0) {
                sum += abs(num % 10);
                num /= 10;
            }
            std::sort(std::vector<int>(sum+1, sum+2).begin(), std::vector<int>(sum+1, sum+2).end());
            if (!std::equal(std::vector<int>(1, 1).begin(), std::vector<int>(1, 1).end(), std::vector<int>(sum+1, sum+2).begin())) {
                count++;
            }
        } else {
            int sum = 0, n = abs(num);
            bool is_negative = true;
            while (n > 0) {
                sum += abs(n % 10);
                n /= 10;
            }
            std::sort(std::vector<int>(sum+1, sum+2).begin(), std::vector<int>(sum+1, sum+2).end());
            if (!std::equal(std::vector<int>(1, 1).begin(), std::vector<int>(1, 1).end(), std::vector<int>(sum+1, sum+2).begin())) {
                count++;
            }
        }
    }
    return count;
}