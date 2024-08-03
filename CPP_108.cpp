#include <vector>
#include <cmath>

int count_nums(std::vector<int> n){
    int count = 0;
    for (int num : n) {
        int sum_digits = 0;
        int num_abs = std::abs(num);
        while (num_abs > 0) {
            sum_digits += num_abs % 10;
            num_abs /= 10;
        }
        if (sum_digits > 0) {
            count++;
        }
    }
    return count;
}