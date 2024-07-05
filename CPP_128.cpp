#include <vector>
#include <cmath>

using namespace std;

int prod_signs(vector<int> arr) {
    if (arr.empty()) return -32768;
    
    int sum_magnitudes = 0;
    int product_of_signs = 1;

    for (int num : arr) {
        sum_magnitudes += abs(num);
        if (num > 0) product_of_signs *= 1;
        else if (num < 0) product_of_signs *= -1;
        else {
            product_of_signs = 0;
            break;
        }
    }

    return sum_magnitudes * product_of_signs;
}