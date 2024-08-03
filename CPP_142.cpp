#include <vector>
#include <cmath>

int sum_squares(std::vector<int> lst) {
    int sum = 0;
    for (size_t i = 0; i < lst.size(); ++i) {
        if ((i + 1) % 3 == 0 && (i + 1) % 4 != 0) {
            sum += std::pow(lst[i], 3);
        } else if ((i + 1) % 4 == 0 && (i + 1) % 3 != 0) {
            sum += std::pow(lst[i], 2);
        } else {
            sum += lst[i];
        }
    }
    return sum;
}