#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

int prod_signs(vector<int> arr) {
    if (arr.empty()) {
        return -32768;
    }

    int product = 1;
    int sum = 0;

    for (int i = 0; i < arr.size(); i++) {
        product *= arr[i] >= 0 ? 1 : -1;
        sum += abs(arr[i]);
    }

    return product * sum;
}

int main() {
    assert(prod_signs({-1, 1, 1, 0}) == 0);
    assert(prod_signs({-1, -2, -3}) == 6);
    assert(prod_signs({4, -5, 6, -7}) == 84);
    assert(prod_signs({0, 0, 0, 0, 0}) == 0);
    assert(prod_signs({0}) == 0);
    assert(prod_signs({-1}) == -1);
    assert(prod_signs({1}) == 1);
    // Add more test cases here

    return 0;
}