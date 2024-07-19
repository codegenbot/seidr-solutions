#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b);

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> get_odd_collatz(int num) {
    std::vector<int> result;
    while (num != 1) {
        result.push_back(num);
        num = num % 2 == 0 ? num / 2 : 3 * num + 1;
    }
    result.push_back(1);
    return result;
}

int main() {
    assert(issame(get_odd_collatz(1), {1}));
    return 0;
}