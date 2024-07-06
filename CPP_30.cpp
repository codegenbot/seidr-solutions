#include <vector>
#include <algorithm>

bool areSame(const std::vector<float>& a,const std::vector<float>& b) {
    return a == b;
}

std::vector<float> getPositive(std::vector<float> v) {
    v.erase(std::remove_if(v.begin(), v.end(), [](float x) { return x < 0; }), v.end());
    return v;
}

int main() {
    assert(getPositive({}).empty());
    std::vector<float> v1 = getPositive({-1, 2, -3, 4, 5});
    std::vector<float> v2 = getPositive({1, 2, 3, 4, 5});

    if(areSame(v1,v2))
        std::cout << "The two vectors are equal.\n";
    else
        std::cout << "The two vectors are not equal.\n";

    return 0;
}