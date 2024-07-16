#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    if(a.size() != b.size()) return false;
    
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    
    return true;
}

std::vector<int> sort_array(std::vector<int> array){
    if(array.empty()) return array;
    
    if((array.front() + array.back()) % 2 == 0){
        std::sort(array.rbegin(), array.rend());
    } else {
        std::sort(array.begin(), array.end());
    }
    
    return array;
}

int main(){
    assert (issame(sort_array({21, 14, 23, 11}) , {23, 21, 14, 11}));
  
    return 0;
}