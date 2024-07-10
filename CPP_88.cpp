#include <vector>
#include <algorithm>

std::vector<int> sort_array(std::vector<int> array){
    if(array.size() == 0) return array;
    
    int sum = array[0] + array[array.size() - 1];
    
    if(sum % 2 == 0){
        std::sort(array.begin(), array.end(), std::greater<int>());
    } else {
        std::sort(array.begin(), array.end());
    }
    
    return array;
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main(){
    assert(issame(sort_array({21, 14, 23, 11}), {11, 14, 21, 23}));
    return 0;
}