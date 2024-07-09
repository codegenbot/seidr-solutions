#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.empty()) return true;
    if((a.front() + a.back()) % 2 == 0) {
        std::sort(a.begin(), a.end(), std::greater<int>());
    } else {
        std::sort(a.begin(), a.end());
    }
    return a == b;
}