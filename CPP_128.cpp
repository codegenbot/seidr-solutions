#include <vector>

using namespace std;

int prod_signs(vector<int> arr) {
    if (arr.empty()) return -32768;
    
    int product = 1;
    for (int num : arr) {
        product *= (num > 0 ? 1 : (num < 0 ? -1 : 0));
    }
    
    int sum_of_magnitudes = 0;
    for (int num : arr) {
        sum_of_magnitudes += abs(num);
    }
    
    return product * sum_of_magnitudes;
}