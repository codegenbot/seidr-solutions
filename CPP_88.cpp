#include <vector>
#include <algorithm>
#include <functional>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

std::vector<int> sort_array(std::vector<int> array){
    if(array.empty()){
        return array;
    }
    
    int first = array[0];
    int last = array[array.size() - 1];
    
    if((first + last) % 2 == 0){
        std::sort(array.begin(), array.end(), std::greater<int>());
    }
    else{
        std::sort(array.begin(), array.end());
    }
    
    return array;
}

int main(){
    assert(issame(sort_array({21, 14, 23, 11}), {11, 14, 21, 23}));

    return 0;
}