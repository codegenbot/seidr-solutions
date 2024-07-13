#include <vector>
#include <cassert>

using namespace std;

int prod_signs(vector<int> arr) {
    if (arr.empty()) return -32768;
    int product = 1;
    for (int num : arr) {
        product *= (num > 0 ? 1 : (num < 0 ? -1 : 0));
    }
    int sum = 0;
    for (int num : arr) {
        sum += abs(num);
    }
    return product * sum;
}

int main() {
    assert(prod_signs({-1, 1, 1, 0}) == 0);
    return 0;
}