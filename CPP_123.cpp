#include <iostream>
#include <vector>

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> result;
    int current = n;

    while (current != 1) {
        if (current % 2 == 0) {
            current /= 2;
        } else {
            current = 3 * current + 1;
        }
        if (current % 2 != 0) {
            result.push_back(current);
        }
    }
    return result;
}

bool issame(std::vector<int> v1, std::vector<int> v2) {
    return v1 == v2;
}

int main() {
    assert(issame(get_odd_collatz(1), std::vector<int>({1})));
}