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
    return a == b;
}

int main() {
    assert(issame(sum_product({10}), {10, 10}));
    cout << "Test passed!" << endl;
    return 0;
}