#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

int prod_signs(const vector<int>& arr) {
    if (arr.empty()) {
        return -32768;
    }

    int product = 1;
    int sum = 0;

    for (int i : arr) {
        if (i > 0) {
            product *= 1;
        } else if (i < 0) {
            product *= -1;
        } else {
            product *= 0;
        }

        sum += abs(i);
    }

    return product * sum;
}

int main() {
    assert(prod_signs({-1, 1, 1, 0}) == 0);

    return 0;
}