#include <vector>

int sum_squares(std::vector<int> lst) {
    int result = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (i % 4 == 3 || i % 4 == 2)
            result += lst[i] * lst[i] * lst[i];
        else if (i % 4 == 0)
            result += lst[i] * lst[i];
    }
    return result;
}