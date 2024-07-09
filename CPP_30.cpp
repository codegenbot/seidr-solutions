```cpp
#include <vector>
#include <algorithm>

std::vector<float> get_positive(std::vector<float> l){
    std::vector<float> result;
    for(float num : l) {
        if(num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

bool same_vectors(std::vector<float> a, std::vector<float> b) { 
    return std::equal(a.begin(),a.end(),b.begin());
}

int main() {
    assert(same_vectors(get_positive({}), {}) );
    return 0;
}