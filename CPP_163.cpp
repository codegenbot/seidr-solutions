#include <vector>

std::vector<int> generate_integers(int a, int b) {
    std::vector<int> result;
    for(int i = a; i <= b; ++i) {
        if(i % 2 == 0) {
            result.push_back(i);
        }
    }
    return result;
}

bool issame(std::vector<int> v1, std::vector<int> v2) {
    if(v1.size() != v2.size()) {
        return false;
    }
    for(size_t i = 0; i < v1.size(); ++i) {
        if(v1[i] != v2[i]) {
            return false;
        }
    }
    return true;
}