#include <vector>
#include <cmath>

int sum_squares(std::vector<int> lst) {
    int result = 0;
    for (int i = 0; i < lst.size(); i++) {
        if ((i + 1) % 4 == 0)
            result += std::pow((double)lst[i], 2);
        else
            result += std::pow((double)lst[i], 3);
    }
    return result;
}