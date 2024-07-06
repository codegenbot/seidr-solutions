```cpp
#include <vector>
#include <algorithm>

bool issame(const std::vector<float>& a,const std::vector<float>& b) {
    return std::equal(a.begin(),a.end(),b.begin());
}

std::vector<float> get_positive(std::vector<float> v) {
    v.erase(std::remove_if(v.begin(), v.end(), [](float x) { return x < 0; }), v.end());
    return v;
}

int main() {
    std::assert(std::equal(get_positive({}), {}));
    std::vector<float> v1 = get_positive({-1, 2, -3, 4, 5});
    std::vector<float> v2 = get_positive({1, 2, 3, 4, 5});

    if(issame(v1,v2))
        std::cout << "The two vectors are equal.\n";
    else
        std::cout << "The two vectors are not equal.\n";

    
    return 0;
}