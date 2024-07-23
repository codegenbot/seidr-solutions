```cpp
#include <vector>
#include <cmath>

using namespace std;

int prod_signs(vector<int> arr) {
    int product = 1;
    long long sum = 0;
    
    for (int num : arr) {
        if (num == 0) {
            return 0;
        }
        product *= abs(num);
        sum += abs(num);
    }
    
    if (arr.empty()) {
        return -32768;
    } else if (sum == 0) {
        return -1; 
    } else {
        return product * (sum / abs(sum));
    }
}