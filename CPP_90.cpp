#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

int next_smallest(const std::vector<int>& lst) {
    std::vector<int> v = lst;
    sort(v.begin(), v.end());
    for(int i=0; i<v.size()-1; i++){
        if(v[i] > v[0]){
            return v[0];
        }
    }
    return -1;
}

int main() {
    assert(next_smallest({-35, 34, 12, -45}) == -45);
    return 0;
}