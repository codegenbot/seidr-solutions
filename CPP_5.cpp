#include <vector>
#include <cassert>

template<typename T>
bool issame(std::vector<T> a, std::vector<T> b){
    return a == b;
}

template<typename T>
std::vector<T> intersperse(std::vector<T> vec, T value) {
    std::vector<T> result;
    for (size_t i = 0; i < vec.size(); ++i) {
        result.push_back(vec[i]);
        if (i < vec.size() - 1) {
            result.push_back(value);
        }
    }
    return result;
}

int main() {
    assert(issame(intersperse({2, 2, 2}, 2), {2, 2, 2, 2, 2}));
    return 0;
}