#include <vector>
#include <initializer_list>

std::vector<int> sort_array(std::vector<int> array) {
    if(array.empty()) {
        throw std::runtime_error("Error: Input array is empty.");
    }
    int sum = array[0] + array.back();
    if (sum % 2 == 1)
        return std::vector<int>(array.begin(), array.end());
    else
        return std::vector<int>(array.rbegin(), array.rend());
}