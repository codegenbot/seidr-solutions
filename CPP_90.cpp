```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int next_smallest(std::vector<int> lst){
    if(lst.empty()) return -1;  
    std::vector<int> v = lst;
    std::sort(v.begin(), v.end());
    for(int i=0; i<v.size()-1; i++){
        if(v[i] != v[i+1])
            return v[i];
    }
    return -1;  
}

int main() {
    assert(next_smallest({-35, 34, 12, -45}) == -35);
    return 0;
}