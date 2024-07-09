#include <vector>
#include <cassert>

float std::max_element(std::vector<float> l) {
    float result = l[0];
    for(float x : l) {
        if(x > result)
            result = x;
    }
    return result;
}

int main() {
    vector<float> v = {1.2, 3.4, 5.6};
    assert(std::max_element(v) == 5.6);
}