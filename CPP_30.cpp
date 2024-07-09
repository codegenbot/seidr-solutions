```cpp
#include <vector>
#include <assert.h>

std::vector<float> get_positive(const std::vector<float>& l) {
    std::vector<float> result;
    for(float num : l) {
        if(num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

bool issame(const std::vector<float>& a, const std::vector<float>& b){
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

int main(){
    assert(issame(get_positive({}), {}));
    //...rest of the code...
}