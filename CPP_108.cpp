#include <vector>

int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
        if (num >= 0) {
            int sum = 0;
            bool negative = false;
            while (num > 0) {
                int digit = num % 10;
                if (!negative && digit < 5) {
                    sum += digit;
                } else {
                    sum += (digit - 4);
                }
                num /= 10;
            }
            if (sum >= 2) count++;
        } else {
            int sum = 0;
            bool negative = true;
            while (num < 0) {
                int digit = abs(num) % 10;
                if (!negative && digit < 5) {
                    sum += digit;
                } else {
                    sum += (digit - 4);
                }
                num /= 10;
            }
            if (sum >= 2) count++;
        }
    }
    return count;
}