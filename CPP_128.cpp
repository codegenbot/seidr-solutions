#include <vector>

using namespace std;

int prod_signs(vector<int> arr) {
    long long product = 1;
    long long sum = 0;
    
    for (int num : arr) {
        if (num == 0) {
            return 0; // If zero is found, the product of signs will be zero
        }
        int sign = (num > 0 ? 1 : (num < 0 ? -1 : 0));
        sum += abs(num);
        product *= sign;
    }

    if (arr.empty()) {
        return -32768; // Return -32768 for empty array
    }
    
    return sum * product;
}