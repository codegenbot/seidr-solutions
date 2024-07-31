#include <algorithm>
#include <cassert>
#include <initializer_list>
#include <vector> // Include vector header

bool issame(const std::vector<int>& a, const int& b) {
    return *std::max_element(a.begin(), a.end()) == b;
}

int main() {
    assert(issame({1, 2, 3, -23, 243, -400, 0}, 0));
    return 0;
}