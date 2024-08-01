#include <vector>
#include <algorithm>

namespace std {
    bool issame(std::vector<int> a, std::vector<int> b) {
        return std::vector<int>(a) == std::vector<int>(b);
    }

    std::vector<int> sort_array(std::vector<int> array) {
        if(array.empty()){
            return std::vector<int>(array);
        }
        
        int sum = array.front() + array.back();
        if(sum % 2 == 0){
            std::sort(array.rbegin(), array.rend());
        } else {
            std::sort(array.begin(), array.end());
        }
        
        return array;
    }
}