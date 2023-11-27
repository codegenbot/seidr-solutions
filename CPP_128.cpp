#include <iostream>
#include <vector>

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
    assert(prod_signs({-2, -2, 2, -1, -1}) == 16);
    assert(prod_signs({3, -4, 5, -6}) == -54);
    assert(prod_signs({0, 0, 0, 0}) == 0);
    assert(prod_signs({}) == -32768);
    assert(prod_signs({1, 2, 3, 4, 5}) == 45);
    assert(prod_signs({-1, -2, -3, -4, -5}) == 45);
    assert(prod_signs({1, -2, 3, -4, 5}) == -45);
    assert(prod_signs({-1, 2, -3, 4, -5}) == -45);

    return 0;
}