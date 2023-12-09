
#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

int sum_product(const int& number) {
    return vector<int>{number * (number + 1)};
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(sum_product({10}), {10}));
    return 0;
}