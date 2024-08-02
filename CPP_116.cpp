#include <algorithm>
std::vector<int> sort_array(const std::vector<int>& arr) { 
    std::vector<int> sorted_arr = arr;
    std::sort(sorted_arr.begin(), sorted_arr.end());
    return sorted_arr;
}