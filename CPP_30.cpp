```cpp
#include <vector>
#include <algorithm>
#include <initializer_list>

std::vector<float> get_positive(const std::vector<float>& l);

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

int main() {
    std::vector<float> input({});  
    assert(issame(get_positive(input), {}));  
    return 0;
}

std::vector<float> get_positive(const std::vector<float>& l){
    std::vector<float> result;
    for(float x : l){
        if(x > 0)
            result.push_back(x);
    }
    return result;
}