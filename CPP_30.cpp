#include <vector>
#include <algorithm>

bool issame(const std::vector<float>& a,const std::vector<float>& b) {
    return std::equal(a.begin(),a.end(),b.begin());
}

int main() {
    assert(std::equal(get_positive({}), {}));
    vector<float> l1 = get_positive({0, 2.5f, -3, 4, 5});
    vector<float> l2 = {2.5f, 4, 5};
    if(issame(l1,l2)) {
        std::cout << "Vectors are same." << std::endl;
    }
    else {
        std::cout << "Vectors are not same." << std::endl;
    }
}