Here is the corrected code:

```cpp
#include <vector>
#include <initializer_list>

std::vector<int> sort_array(std::vector<int> array) {
    if(array.empty()) {
        throw std::runtime_error("Error: Input array is empty.");
    }
    int sum = 0;
    for(int num : array) {
        sum += num;
    }
    if (sum % 2 == 1)
        return std::vector<int>(array.begin(), array.end());
    else
        return std::vector<int>(array.rbegin(), array.rend());
}