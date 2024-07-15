#include <vector>

long double dif_square_sum(const std::vector<float>& lst) {
    long double sum = 0;
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            sum += static_cast<double>(num * num);
        }
    }
    return sum;
}