```cpp
#include <vector>
#include <algorithm>

float get_positive(float f) {
    return (f > 0) ? f : 0;
}

bool issame(const std::vector<float>& a,const std::vector<float>& b) {
    return std::equal(a.begin(),a.end(),b.begin());
}

int main() {
    assert(std::equal({get_positive(0)}, {}));
    std::vector<float> l1 = {get_positive(0), get_positive(2.5f), get_positive(-3), get_positive(4), get_positive(5)};
    std::vector<float> l2 = {get_positive(2.5f), get_positive(4), get_position(5)};
    if(issame(l1,l2)) {
        std::cout << "Vectors are same." << std::endl;
    }
    else {
        std::cout << "Vectors are not same." << std::endl;
    }
}