#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    int sum = 0;
    int product = 1;
    for (int num : a) {
        sum += num;
        product *= num;
    }
    return (a == b) && (sum == product);
}

int main() {
    assert(issame({10, 10}, {10, 10}));
}