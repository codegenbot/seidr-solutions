```cpp
#include <iostream>
#include <algorithm>
#include <vector>

namespace std {
int next_smallest(std::vector<int> lst){
    std::vector<int> v = lst;
    std::sort(v.begin(), v.end());
    if(v.size() < 2) return -1; // or any other value that represents None
    return v[1];
}
}