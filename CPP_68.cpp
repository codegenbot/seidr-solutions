#include <iostream>
#include <vector>

template<typename T>
bool issame(const std::vector<T>& v1, const std::vector<T>& v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    for (int i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }
    return true;
}

template<typename T>
std::vector<T> pluck(const std::vector<std::vector<T>>& arr, int index) {
    return arr[index];
}

int main() {
    assert(issame(pluck({7, 9, 7, 1}, {}), {}));
    return 0;
}