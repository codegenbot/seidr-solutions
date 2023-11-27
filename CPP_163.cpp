#include <iostream>
#include <vector>
#include <cassert>
#include <random>

std::vector<int> generate_integers(int start, int end) {
    std::random_device rd;
    std::vector<int> nums;

    for (int i = start; i <= end; i++) {
        nums.push_back(rd());
    }

    return nums;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(generate_integers(17, 89), {}));
    return 0;
}