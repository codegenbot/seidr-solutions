#include <stdio.h>
#include <math.h>
#include <vector>
using namespace std;

int prod_signs(vector<int> arr) {
    if (arr.empty()) {
        return -32768;
    }

    int product_of_signs = 1;
    int sum_of_magnitudes = 0;

    for (int num : arr) {
        sum_of_magnitudes += abs(num);
        if (num < 0) {
            product_of_signs *= -1;
        }
    }

    return product_of_signs * sum_of_magnitudes;
}