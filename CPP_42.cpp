#include <vector>
#include <cassert>

std::vector<int> incr_list(std::vector<int> a) {
    for (int& num : a) {
        num++;
    }
    
    return a;
}