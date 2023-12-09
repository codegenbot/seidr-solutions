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

bool is_equal(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(is_equal(sum_product({10}), {10}));
    return 0;
}