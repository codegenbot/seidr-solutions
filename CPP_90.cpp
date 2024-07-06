#include <iostream>
#include <vector>
#include <algorithm>

int next_smallest(const std::vector<int>& lst) {
    if(lst.size() < 2) return -1; // None
    int result = INT_MAX;
    for(int i=0; i<lst.size(); i++){
        for(int j=i+1; j<lst.size(); j++){
            if(lst[i] > lst[j])
                result = std::min(result, lst[j]);
        }
    }
    return result;
}

int main_test() {
    assert(next_smallest({-35, 34, 12, -45}) == -35);
    return 0;
}