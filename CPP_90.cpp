```cpp
#include <vector>
#include <algorithm>

int next_smaller(std::vector<int> lst) {
    if(lst.size() < 2) return -1; 
    std::vector<int> sorted = lst;
    std::sort(sorted.begin(), sorted.end());
    for(int i = sorted.size()-1; i > 0; i--){
        if(sorted[i] != sorted[i-1]){
            return sorted[i-1];
        }
    }
    return -1; 
}