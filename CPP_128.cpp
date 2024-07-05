#include <vector>
#include <cstdlib>
using namespace std;

int prod_signs(vector<int> arr){
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
    // Example usage of prod_signs
    vector<int> arr = { -1, 2, 3, 0 };
    int result = prod_signs(arr);
    // Output the result
    return 0;
}