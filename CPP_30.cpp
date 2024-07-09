#include <vector>
#include <iostream>

std::vector<float> vector_get_positives(std::vector<float> l) {
    std::vector<float> result;
    for(float num : l){
        if(num > 0)
            result.push_back(num);
    }
    return result;
}

bool same(const std::vector<float>& a, const std::vector<float>& b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(size_t i = 0; i < a.size(); ++i) {
        if(std::abs(a[i] - b[i]) > 1e-5) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(same(vector_get_positives({}), {}));
    return 0;
}