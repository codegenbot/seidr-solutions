```cpp
#include <vector>
#include <algorithm>

bool issame(const std::vector<float>& a,const std::vector<float>& b) {
    return std::equal(a.begin(),a.end(),b.begin());
}

int main() {
    assert(std::equal(get_positive(), {}));
    std::vector<float> v1 = get_positive({-1, 0, 2, -3, 4});
    std::vector<float> v2 = get_positive({-5, 6, -8, 9, 10});
    if (!issame(v1,v2)) {
        std::cout << "v1 and v2 are not same." << endl;
    } else {
        std::cout << "v1 and v2 are same." << endl;
    }
}