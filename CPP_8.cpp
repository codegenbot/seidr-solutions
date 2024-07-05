#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

// Function to calculate the sum and product of a list of numbers
vector<int> sum_product(vector<int> numbers) {
    int sum = 0;
    int product = 1;
    for(int num : numbers) {
        sum += num;
        product *= num;
    }
    return {sum, product};
}

// Function to check if two vectors of integers are the same
bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(sum_product({10}), {10, 10}));
    cout << "Test passed!" << endl;
    return 0;
}