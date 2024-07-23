#include <vector>
#include <initializer_list>

int count_nums(std::vector<int> numbers) {
    int count = 0;
    for (int num : numbers) {
        if (num < 0) {
            num = -num;
        }
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        if (sum > 0) {
            count++;
        }
    }
    return count;