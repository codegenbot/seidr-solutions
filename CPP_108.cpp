#include <vector>
#include <iostream>

int count_nums(std::vector<int> n) {
    int count = 0;
    for (int num : n) {
        if (num >= 0) {
            int sum = 0;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            if (sum > 0)
                count++;
        } else {
            int sum = 0, sign = 1;
            while (abs(num) > 0) {
                if (abs(num) % 10 != 0)
                    sum += sign * (abs(num) % 10);
                num /= 10;
                sign = -sign;
            }
            if (sum > 0)
                count++;
        }
    }
    return count;
}

int main() {
    std::vector<int> n = {1};
    int result = count_nums(n);
    std::cout << "The number of positive sums is: " << result << std::endl;
    return 0;
}