#include <vector>

using namespace std;

int prod_signs(vector<int> arr) {
    int product = 1;
    long long sum = 0;
    
    if (arr.empty()) return -32768;
    
    for (int num : arr) {
        if (num == 0) product *= 0; // reset product to 0
        else product *= (num > 0 ? 1 : -1);
        sum += abs(num);
    }
    
    return product * sum;
}