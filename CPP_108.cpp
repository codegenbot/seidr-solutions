#include <vector>
#include <assert.h>

int count_nums(std::vector<int> n) {
    int count = 0;
    for (int num : n) {
        if (num < 0) {
            num = -num;
        }
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        if (sum % 2 == 1) {
            count++;
        }
    }
    return count;
}

int main() {
    assert(count_nums({1}) == 1);
    return 0;
}