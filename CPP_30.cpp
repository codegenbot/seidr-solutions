#include <vector>
#include <cassert>

template <typename T>
bool issame(const std::vector<T>& v1, const std::vector<T>& v2) {
    return v1 == v2;
}

template <typename T>
std::vector<T> get_positive(const std::vector<T>& vec) {
    std::vector<T> positiveVec;
    for (const auto& elem : vec) {
        if (elem > 0) {
            positiveVec.push_back(elem);
        }
    }
    return positiveVec;
}

int main() {
    assert(issame(get_positive<int>(std::vector<int>{}), std::vector<int>{}));
    return 0;
}