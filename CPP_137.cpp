#include <algorithm>
#include <string>

template <typename T>
T compare_one(T a, T b) {
    return std::max(a, b);
}

int main() {
    assert(compare_one(1.5f, 2.3f) == 2.3f);
    assert(compare_one(std::stof("1.5"), std::stof("2.3")) == 2.3f);
    assert(compare_one(std::stoi("1"), 1) == 1);
    assert(compare_one(std::string("1"), std::to_string(1)).empty());
    return 0;
}