#include <vector>
#include <algorithm>

std::vector<int> sort_array(std::vector<int> array){
    if(array.size() == 0) return array;
    std::vector<int> sorted_array = array;
    if((array.front() + array.back()) % 2 == 0){
        std::sort(sorted_array.rbegin(), sorted_array.rend());
    } else {
        std::sort(sorted_array.begin(), sorted_array.end());
    }
    return sorted_array;
}