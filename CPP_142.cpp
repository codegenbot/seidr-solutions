#include <vector>

int sum_squares(std::vector<int> lst) {
    int sum = 0;
    for (int i = 0; i < lst.size(); ++i) {
        if (i % 3 == 0) {
            sum += lst[i] * lst[i];
        } else if (i % 4 == 0 && i % 3 != 0) {
            sum += lst[i] * lst[i] * lst[i];
        } else {
            sum += lst[i];
        }
    }
    return sum;
}