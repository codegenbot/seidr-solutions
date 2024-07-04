#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

// Function to calculate the sum and product of a vector of numbers
vector<int> sum_product(vector<int> numbers) {
    int sum = 0;
    int product = 1;
    for(int num : numbers) {
        sum += num;
        product *= num;
    }
    if(numbers.empty()) {
        product = 1;
    }
    return {sum, product};
}

// Function to compare two vectors
bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    // Testing the sum_product function
    assert(issame(sum_product({1, 2, 3, 4}), {10, 24}));
    assert(issame(sum_product({}), {0, 1}));
    assert(issame(sum_product({-1, -2, -3, -4}), {-10, 24}));
    assert(issame(sum_product({10}), {10, 10}));

    cout << "All tests passed!" << endl;
    return 0;
}