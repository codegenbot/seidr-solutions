#include <vector>
#include <algorithm>

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> result;
    while (n != 1) {
        if (n % 2 == 0)
            n /= 2;
        else
            n = 3 * n + 1;
        result.push_back(n);
    }
    return result;
}

bool issame(std::vector<int>& a, std::vector<int>& b) {
    return (a.size() == 0 && b.size() == 0) || (a.size() == b.size() && a == b);
}

int main() {
    assert(issame({get_odd_collatz(12)}, {1, 2, 6}) == true);
    return 0;
}