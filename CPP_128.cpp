#include <vector>

using namespace std;

int prod_signs(vector<int> arr) {
    int product = 1;
    int sum = 0;
    
    for (int num : arr) {
        if (num != 0) {
            product *= sign(num);
            sum += abs(num);
        }
    }
    
    return product * sum > 0 ? sum : -32768;
}

int sign(int num) {
    return num / abs(num);
}