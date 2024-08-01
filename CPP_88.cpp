#include <vector>

bool issame(std::vector<int> a, std::vector<int> b){
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

std::vector<int> sort_array(std::vector<int> array){
    if(array.empty()){
        return array;
    }
    
    int sum = array.front() + array.back();
    if(sum % 2 == 0){
        std::sort(array.rbegin(), array.rend());
    } else {
        std::sort(array.begin(), array.end());
    }
    
    return array;
}