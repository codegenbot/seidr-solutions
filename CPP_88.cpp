#include <vector>
#include <algorithm>
#include <cassert>

bool is_same(std::vector<int>& a, std::vector<int>& b){
    return a == b;
}

std::vector<int> sort_array(std::vector<int>& array){
    if(array.size() <= 1){
        return array;
    }
    
    int sum = array[0] + array[array.size()-1];
    
    if(sum % 2 == 0){
        std::sort(array.rbegin(), array.rend());
    }
    else{
        std::sort(array.begin(), array.end());
    }
    
    return array;
}

int main(){
    assert(is_same(sort_array({21, 14, 23, 11}), {11, 14, 21, 23}));
    
    return 0;
}