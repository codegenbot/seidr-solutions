#include <vector>
using namespace std;

int prod_signs(vector<int> arr) {
    int product = 1;
    for (int num : arr) {
        if (num != 0) {
            product *= (num > 0 ? 1 : -1);
        }
    }
    return arr.empty() ? -32768 : product * abs(arr[0]);
}