#include <vector>
#include <cassert> 

bool issame(std::vector<int> a, std::vector<int> b) { 
    return a == b;
}

std::vector<int> tri(int n) {
    std::vector<int> result;
    if (n >= 0) {
        result.push_back(3);
        if (n > 0) {
            result.push_back(1);
        }
    }
    return result;
}

int main() {
    assert(issame(tri(1), std::vector<int>{3, 1}));
}