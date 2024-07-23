#include <vector>
#include <cmath>

int sum_squares(std::vector<int> lst) {
    int result = 0;
    for (int i = 0; i < lst.size(); i++) {
        if ((i + 1) % 4 == 0)
            result += pow((double)lst[i], 3);
        else if ((i + 1) % 12 == 0)
            result += lst[i] * lst[i] * lst[i];
    }
    return result;
}