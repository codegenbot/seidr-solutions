```cpp
#include <vector>

std::vector<int> sort_array(std::vector<int> array) {
    int sum = array[0] + array.back();
    if (sum % 2 == 1)
        return std::vector<int>(array);
    else
        return std::vector<int>(std::vector<int>(array).rbegin(), std::vector<int>(array).rend());

}