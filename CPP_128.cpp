#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

using namespace std;

int prod_signs(vector<int> arr) {
    if (arr.empty()) return -32768;

    int sum_magnitudes = 0;
    int product_signs = 1;

    for (int num : arr) {
        sum_magnitudes += abs(num);
        if (num > 0) product_signs *= 1;
        else if (num < 0) product_signs *= -1;
        else product_signs *= 0;
    }

    return sum_magnitudes * product_signs;
}

int main() {
    assert(prod_signs({-1, 1, 1, 0}) == 0);
    cout << "Test passed!" << endl;
    return 0;
}