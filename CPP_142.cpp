```cpp
#include <vector>

int sum_squares(vector<int> lst) {
    int result = 0;
    for (int i = 0; i < lst.size(); i++) {
        if ((i + 1) % 3 == 0 && (i + 1) % 4 != 0) {
            result += std::pow(lst[i], 3);
        } else if ((i + 1) % 3 == 0) {
            result += std::pow(lst[i], 2);
        }
    }
    return result;
}