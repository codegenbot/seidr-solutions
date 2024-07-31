#include <vector>
#include <cmath>
using namespace std;

int prod_signs(const std::vector<int>& arr) {
    if (arr.empty()) {
        return -32768;
    }

    int product = 1;
    int sum = 0;
    for (int num : arr) {
        int sign = (num > 0) - (num < 0);
        product *= sign;
        sum += std::abs(num);
    }

    return product * sum;
}

int main() {
    assert(prod_signs({-1, 1, 1, 0}) == 0);
    return 0;
}