#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<int> sum_product(const vector<int>& numbers) {
    int result = 0;
    for (int i = 0; i < numbers.size(); i++) {
        result += numbers[i] * (numbers[i] + 1);
    }
    return vector<int>{result};
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame({10}, {10}));
    return 0;
}