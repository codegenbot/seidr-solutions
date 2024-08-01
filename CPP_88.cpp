#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> sort_array(std::vector<int> array){
    if(array.empty()){
        return array;
    }
    
    int sum = array.front() + array.back();
    if(sum % 2 == 0){
        std::sort(std::array.rbegin(), std::array.rend());
    } else {
        std::sort(std::array.begin(), std::array.end());
    }
    
    return std::array;
}