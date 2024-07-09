```cpp
#include <vector>
using namespace std;

int prod_signs(vector<int> arr) {
    int sign_product = 1;
    long long sum_of_magnitudes = 0;

    for (int num : arr) {
        if (num == 0) {
            return 0;
        }
        int sign = (num > 0) ? 1 : ((num < 0) ? -1 : 1);
        sum_of_magnitudes += abs(num);
        sign_product *= sign;
    }

    if (arr.empty()) {
        return -32768;
    }

    return sum_of_magnitudes * sign_product;
}

int main() {
    assert(prod_signs({-1, 1, 1, 0}) == 0);
    return 0;
}