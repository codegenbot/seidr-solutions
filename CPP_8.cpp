#include <vector>
#include <cassert>

using std::vector;

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> sum_product(const vector<int>& numbers) {
    int sum = 0;
    int product = 1;

    for (int num : numbers) {
        sum += num;
        product *= num;
    }

    return {sum, product};
}

int main() {
    assert(issame(sum_product({10}), vector<int>{10, 10}));
    return 0;
}