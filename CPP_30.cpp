```cpp
#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

std::vector<float> get_positive(std::vector<float> l){
    std::vector<float> result;
    for(float x : l){
        if(x > 0)
            result.push_back(x);
    }
    return result;
}

int main() {
    std::vector<float> input = {};
    assert(issame(get_positive(input), {}));
    return 0;
}