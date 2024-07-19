#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    if((a.front() + a.back()) % 2 == 0){
        std::sort(a.begin(), a.end(), std::greater<int>());
    } else {
        std::sort(a.begin(), a.end());
    }

    if((b.front() + b.back()) % 2 == 0){
        std::sort(b.begin(), b.end(), std::greater<int>());
    } else {
        std::sort(b.begin(), b.end());
    }

    return a == b;
}