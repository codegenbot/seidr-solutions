#include <vector>
#include <cmath>

int sum_squares(std::vector<int> lst) {
    int total = 0;
    for (size_t i = 0; i < lst.size(); ++i) {
        if (i % 3 == 0 && i % 4 != 0)
            total += lst[i] * lst[i];
        else if (i % 4 == 0 && i % 3 != 0)
            total += std::pow(lst[i], 3);
    }
    return total;
}

int main() {
    int result = sum_squares({-1, -3, 17, -1, -15, 13, -1, 14, -14, -12, -5,
         14, -14, 6, 13, 11, 16, 16, 4, 10});
    return 0;
}