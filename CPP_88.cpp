```cpp
#include <vector>

vector<int> sort_array(vector<int> array) {
    int sum = array[0] + array.back();
    if (sum % 2 == 1)
        return vector<int>(array);
    else
        return vector<int>(std::vector<int>(array).rbegin(), std::vector<int>(array).rend());

}