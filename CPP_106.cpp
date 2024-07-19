#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> f(int n); 

int main() {
    // Add your test cases here to check the functions
    assert(issame({1, 2, 3}, {1, 2, 3}));
    assert(!issame({1, 2, 3}, {1, 2, 4}));

    assert(f(3) == std::vector<int>({1, 3, 6}));
    assert(f(5) == std::vector<int>({1, 3, 6, 10, 15}));

    return 0;
}
