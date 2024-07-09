```cpp
#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

std::vector<float> get_positive(std::vector<float> l){
    std::vector<float> result;
    for(float num : l) {
        if(num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    assert(get_positive({}) == {});
    std::vector<float> a = {1.0, -2.0, 3.0};
    std::vector<float> b = get_positive(a);
    if (!issame(b, {1.0, 3.0})) {
        std::cerr << "Failed: expected get_positive({1.0, -2.0, 3.0}) to return {1.0, 3.0}" << std::endl;
        return 1;
    }
    return 0;
}