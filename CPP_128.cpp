```
#include <vector>
#include <cmath>

using namespace std;

int sign(int num) {
    return num / abs(num);
}

int prod_signs(vector<int> arr) {
    int product = 1;
    int sum = 0;
    
    for (int num : arr) {
        if (num != 0) {
            product *= sign(num);
            sum += std::abs(num);
        }
    }
    
    return product * sum > 0 ? sum : -32768;
}