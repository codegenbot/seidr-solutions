#include <vector>

using namespace std;

int prod_signs(vector<int> arr) {
    int product = 1;
    long sum = 0;
    
    for (int num : arr) {
        if (num == 0) {
            return 0;
        }
        product *= sign(num);
        sum += abs(num);
    }
    
    if (sum == 0)
        return 0;
    else
        return product * sum;
}

int sign(int num) {
    if (num > 0)
        return 1;
    else if (num < 0)
        return -1;
    else
        return 0;
}