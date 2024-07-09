#include <vector>

using namespace std;

int prod_signs(vector<int> arr) {
    long long product = 1;
    int sum = 0;
    
    for (int num : arr) {
        if (num == 0) {
            return -32768; // or any other value to indicate an empty array
        }
        product *= abs(num);
        sum += num;
    }
    
    return product * (sum > 0 ? 1 : (sum < 0 ? -1 : 0));
}