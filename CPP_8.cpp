#include <vector>

bool issame(vector<int> a, vector<int> b) {
    int sum = 0;
    int product = 1;
    for (int num : a) {
        sum += num;
        product *= num;
    }
    return a == b && b == vector<int>{sum, product};
}

int main() {
    assert(issame(sum_product(vector<int>{10}), vector<int>{10, 10}));
}