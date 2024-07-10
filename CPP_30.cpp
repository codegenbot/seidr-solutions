#include <vector>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b){
    if (a.size() != b.size()) {
        return false;
    }
    
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    std::vector<float> l = {1.5, -2.3, 4.0, 0.8, -5.2};
    std::vector<float> result = positive_numbers(l);
    assert(issame(result, {1.5, 4.0, 0.8}));
}