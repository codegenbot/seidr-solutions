#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

// sum_product function
vector<int> sum_product(vector<int> numbers) {
    int sum = 0;
    int product = 1;
    for(int num : numbers) {
        sum += num;
        product *= num;
    }
    return {sum, product};
}

// issame function
bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(sum_product({10}), {10, 10}));
    assert(issame(sum_product({1, 2, 3}), {6, 6}));
    assert(issame(sum_product({0, 1, 2}), {3, 0}));

    cout << "All tests passed!" << endl;
    return 0;
}