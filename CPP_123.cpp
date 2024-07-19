#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> get_odd_collatz(int num) {
    std::vector<int> collatz_seq;
    collatz_seq.push_back(num);
    while (num != 1) {
        if (num % 2 == 0) {
            num /= 2;
        } else {
            num = 3 * num + 1;
        }
        if (num % 2 != 0) {
            collatz_seq.push_back(num);
        }
    }
    return collatz_seq;
}

int main() {
    assert(issame(get_odd_collatz(1), {1}));
    return 0;
}