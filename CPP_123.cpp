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

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(get_odd_collatz(1).size() == 1);
}