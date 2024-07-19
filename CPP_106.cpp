#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> f(int n);

int main() {
    // Add your test cases here to check the functions
    std::vector<int> a = {1, 2, 3};
    std::vector<int> b = {1, 3, 3};
    assert(!issame(a, b));

    std::vector<int> c = f(5);
    assert(c[0] == 1);
    assert(c[1] == 2);
    assert(c[2] == 6);
    assert(c[3] == 24);
    assert(c[4] == 3 + 6 + 24 + 120 + 720);

    return 0;
}