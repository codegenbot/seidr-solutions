#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.size() == 0) return a;
    std::vector<int> sorted_array = a;
    if((a.front() + a.back()) % 2 == 0) {
        std::sort(sorted_array.rbegin(), sorted_array.rend());
    } 
    else {
        std::sort(sorted_array.begin(), sorted_array.end());
    }
    return sorted_array;
}