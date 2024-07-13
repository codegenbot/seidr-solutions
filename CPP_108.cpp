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
                if (digit % 2 != 0)
                    is_odd = true;
                sum += digit;
                num /= 10;
            }
            if (is_odd && sum > 0)
                ++count;
        } else {
            num = -num; 
            int sum = 0;
            bool is_negative = true;
            bool is_odd = false;
            while (num > 0) {
                int digit = num % 10;
                if (!is_negative && digit % 2 != 0)
                    is_odd = true;
                sum += digit;
                num /= 10;
                is_negative = !is_negative;
            }
            if ((is_odd || is_negative) && sum > 0)
                ++count;
        }
    }
    return count;
}

int main() {
    assert(count_nums({1}) == 1);
    return 0;
}