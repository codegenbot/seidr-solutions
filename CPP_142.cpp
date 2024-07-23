```cpp
#include <vector>
#include <cmath>

int sum_squares(std::vector<int> lst) {
    int result = 0;
    for (int i = 0; i < lst.size(); i++) {
        result += pow(lst[i], (i + 1) % 3 + 1);
    }
    return result;
}