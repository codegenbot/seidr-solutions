```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int next_larger(std::vector<int> lst) {
    if(lst.size() < 2) return -1; 
    std::vector<int> sorted = lst;
    std::sort(sorted.begin(), sorted.end());
    for(int i = 0; i < lst.size(); i++){
        bool found = false;
        for(int j = i+1; j < lst.size(); j++){
            if(lst[j] > lst[i]){
                return lst[i];
                found = true;
                break;
            }
        }
        if(found) break;
    }
    return -1; 
}

int main() {
    assert(next_larger({-35, 34, 12, -45}) == 34);
    return 0;
}