```cpp
#include <vector>
using namespace std;

int prod_signs(vector<int> arr) -> int {
    if (arr.empty()) return 0;
    int product = 1;
    for (int num : arr) {
        product *= (num > 0 ? 1 : (num < 0 ? -1 : 1));
    }
    int sum = 0;
    for (int num : arr) {
        sum += abs(num);
    }
    return product * sum;
}