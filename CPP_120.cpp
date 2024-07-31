#include <algorithm>
#include <cassert>

bool issame(int a, int b) {
    return a == b;
}

int main() {
    assert(issame(*std::max_element({1, 2, 3, -23, 243, -400, 0}), 0));
    return 0;
}