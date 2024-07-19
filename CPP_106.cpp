#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> f(int n);

int main() {
    // Add your test cases here to check the functions
    assert(issame({1, 2, 3}, {1, 2, 3}));
    assert(!issame({1, 2, 3}, {3, 2, 1}));
    
    std::vector<int> result1 = f(3);
    assert(issame(result1, {1, 3, 6}));

    std::vector<int> result2 = f(5);
    assert(issame(result2, {1, 3, 6, 10, 15}));

    return 0;
}