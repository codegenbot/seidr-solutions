#include <vector>
using namespace std;

int prod_signs(vector<int> arr) {
    long long product = 1;
    long long sum = 0;

    for (int num : arr) {
        if (num == 0) {
            return 0; // Product will be 0
        }
        product *= (num > 0 ? 1 : -1);
        sum += abs(num);
    }

    return (arr.empty()) ? INT_MIN : product * sum;
}