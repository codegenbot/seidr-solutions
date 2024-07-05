#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

vector<int> sum_product(const vector<int>& numbers) {
    int sum = 0;
    int product = 1;
    for (int num : numbers) {
        sum += num;
        product *= num;
    }
    return {sum, product};
}

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(sum_product({10}), {10, 10}));
    assert(issame(sum_product({1, 2, 3}), {6, 6}));
    cout << "All test cases pass" << endl;
    return 0;
}