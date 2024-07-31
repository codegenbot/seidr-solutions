#include <algorithm>
#include <cassert>
#include <initializer_list>

template <typename T>
bool issame(const T& a, const T& b) {
    return a == b;
}

int main() {
    assert(issame(*std::max_element({1, 2, 3, -23, 243, -400, 0}), 0));
    return 0;
}