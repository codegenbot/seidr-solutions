#include <vector>
#include <cassert>
#include <cmath>

using namespace std;

int prod_signs(const vector<int>& arr) {
    if (arr.empty()) return -32768;

    int product = 1;
    int sum_magnitudes = 0;

    for (int num : arr) {
        product *= (num == 0) ? 1 : num / abs(num);
        sum_magnitudes += abs(num);
    }

    return product * sum_magnitudes;
}

int main() {
    assert(prod_signs({-1, 1, 1, 0}) == 0); // Sample test case
    // Add more test cases as needed

    return 0;
}