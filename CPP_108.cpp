#include <vector>
using namespace std;

int count_nums(vector<int> v) {
    int count = 0;
    for (int num : v) {
        if (num >= 0) {
            int sum = 0;
            bool is_odd = false;
            while (num > 0) {
                int digit = num % 10;
                sum += digit;
                if (digit % 2 != 0)
                    is_odd = true;
                num /= 10;
            }
            if (sum > 0 && is_odd)
                ++count;
        } else {
            num = -num; // convert to positive
            int sum = 0;
            bool is_negative = true;
            bool is_odd = false;
            while (num > 0) {
                int digit = num % 10;
                if (!is_negative) {
                    sum += digit;
                    if (digit % 2 != 0)
                        is_odd = true;
                }
                num /= 10;
                is_negative = !is_negative;
            }
            if (sum > 0 && is_odd)
                ++count;
        }
    }
    return count;
}

int main() {
    assert(count_nums({1}) == 1);
    return 0;
}