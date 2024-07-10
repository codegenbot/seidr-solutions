#include <vector>
#include <cassert>

template<typename T>
bool issame(const std::vector<T>& a, const std::vector<T>& b) {
    return a == b;
}

template<typename T>
std::vector<T> get_positive(std::vector<T> vec) {
    for (auto& elem : vec) {
        if (elem < 0) {
            elem *= -1;
        }
    }
    return vec;
}

int main() {
    assert(issame(get_positive(std::vector<int>{}), std::vector<int>{}));
    return 0;
}