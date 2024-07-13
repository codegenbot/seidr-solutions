#include <vector>
using namespace std;

int count_nums(vector<int> v) {
    int count = 0;
    for (int num : v) {
        if (num >= 0) {
            int sum = 0;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            if (sum > 0)
                ++count;
        } else {
            int sum = 0;
            bool is_negative = true;
            while (num != 0) {
                if (!is_negative) {
                    sum += num % 10;
                }
                num = abs(num);
                is_negative = !is_negative;
            }
            if (sum > 0)
                ++count;
        }
    }
    return count;
}

int main() {
    assert(count_nums({1}) == 1);
    return 0;
}