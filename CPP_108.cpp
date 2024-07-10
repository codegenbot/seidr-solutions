```cpp
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
            if (sum > 1) {
                count++;
            }
        } else {
            int sum = 0, n = abs(num);
            bool is_negative = true;
            while (n > 0) {
                sum += abs(n % 10);
                n /= 10;
            }
            if ((is_negative && sum >= 2) || (!is_negative && sum > 1)) {
                count++;
            }
        }
    }
    return count;
}