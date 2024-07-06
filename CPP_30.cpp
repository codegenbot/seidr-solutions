#include <vector>
#include <algorithm>

bool issame(const std::vector<float>& a,const std::vector<float>& b) {
    return std::equal(a.begin(),a.end(),b.begin());
}

int main() {
    assert(std::equal({},{});
    vector<float> v1 = get_positive({-2, 3.5, -10.2});
    vector<float> v2 = get_positive({1, 0, -1.9});

    if (issame(v1,v2)) {
        std::cout << "v1 and v2 are same" << std::endl;
    } else {
        std::cout << "v1 and v2 are not the same" << std::endl;
    }
    
}