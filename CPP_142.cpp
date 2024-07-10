#include <vector>

int sum_squares(const std::vector<int>& lst){
    int sum = 0;
    for (int i = 0; i < lst.size(); ++i) {
        int squared_value = lst[i] * lst[i];
        if (i % 3 == 0) {
            lst[i] = squared_value;
        } else if (i % 4 == 0 && i % 3 != 0) {
            lst[i] = squared_value * lst[i];
        }
        sum += lst[i];
    }
    return sum;
}