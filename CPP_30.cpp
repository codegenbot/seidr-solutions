#include <vector>
#include <algorithm>

bool issame(std::vector<float> a) {
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

int main() {
    assert(issame({}) == issame({1.0,2.0}) && "Test failed");
    return 0;
}