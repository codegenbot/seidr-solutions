#include <vector>
#include <algorithm>
#include <cassert>

namespace std {
bool issame(std::vector<float> a, std::vector<float> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<float> get_positive(std::vector<float> l){
    std::vector<float> result;
    for(float x : l) {
        if(x > 0) {
            result.push_back(x);
        }
    }
    return result;
}

int test() {
    assert(issame(get_positive({1.0,2.0}), get_positive({1.0,2.0})) == true); 
    return 0;
}