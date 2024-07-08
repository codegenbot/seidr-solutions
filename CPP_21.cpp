#include <vector>
#include <cassert>

bool is_same(std::vector<float> a, std::vector<float> b){
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

void rescale_to_unit(std::vector<float>& values) {
    // Your implementation for rescale_to_unit function
}

int main() {
    std::vector<float> values = {12.0, 11.0, 15.0, 13.0, 14.0};
    rescale_to_unit(values);
    assert(is_same(values, {0.25, 0.0, 1.0, 0.5, 0.75}));
}