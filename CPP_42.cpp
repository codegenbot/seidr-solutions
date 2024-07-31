#include <vector>
#include <cassert>

std::vector<int> incr_list(std::vector<int> a) {
    for (int i = 0; i < a.size(); i++) {
        a[i]++;
    }
    
    return a;
}