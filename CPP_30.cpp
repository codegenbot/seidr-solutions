#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

int main() {
    std::vector<float> input = {1.0f, -2.0f, 3.0f};
    assert(issame(get_positive(input), {3.0f}));  
    return 0;
}

std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> result;
    for(float x : l){
        if(x > 0)
            result.push_back(x);
    }
    return result;
}