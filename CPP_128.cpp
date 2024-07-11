#include <vector>

using namespace std;

int prod_signs(vector<int> arr) {
    int product = 1;
    long sum = 0;
    
    for (int num : arr) {
        if (!arr.empty()) {
            product *= sign(num);
        }
        sum += abs(num);
    }
    
    return !arr.empty() ? sum * product : -32768;
}

int sign(int n) {
    return n > 0 ? 1 : n < 0 ? -1 : 0;
}