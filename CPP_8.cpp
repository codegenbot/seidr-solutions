#include <vector>
#include <cassert>
#include <iostream>

using namespace std;

vector<int> sum_product(vector<int> numbers) {
    int sum = 0;
    int product = 1;
    for(int num : numbers) {
        sum += num;
        product *= num;
    }
    return {sum, product};
}

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for(size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(sum_product({10}), {10, 10}));
    assert(issame(sum_product({1, 2, 3, 4}), {10, 24}));
    assert(issame(sum_product({5, 5}), {10, 25}));
    cout << "All test cases pass." << endl;
    return 0;
}