```cpp
#include <vector>
#include <algorithm>

std::vector<float> get_positive(const std::vector<float>& v) {
    std::vector<float> pos_v;
    for (float num : v) {
        if (num >= 0.0f) {
            pos_v.push_back(num);
        }
    }
    return pos_v;
}

bool issame(const std::vector<float>& a,const std::vector<float>& b) {
    return std::equal(a.begin(),a.end(),b.begin());
}

int main() {
    assert(std::equal(get_positive({}), {}));
    vector<float> v1 = get_positive({-1, 2, -3, 4, 5});
    vector<float> v2 = get_positive({1, 2, 3, 4, 5});
    
    if(issame(v1,v2))
        std::cout << "The two vectors are equal.\n";
    else
        std::cout << "The two vectors are not equal.\n";
    
    return 0;
}