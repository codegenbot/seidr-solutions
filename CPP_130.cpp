#include <vector>
#include <cassert>

std::vector<int> tri(int n);

namespace std {
    vector<int> tri(int n) {
        return vector<int>{n, n+2};
    }
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}