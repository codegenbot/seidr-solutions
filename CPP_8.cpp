#include <vector>
#include <numeric>

using namespace std;

vector<int> sum_product(vector<int> numbers) {
    if (numbers.empty()) {
        return {0, 1};
    }
    int sum = accumulate(numbers.begin(), numbers.end(), 0);
    long long product = 1;
    for (int num : numbers) {
        product *= num;
    }
    return {(int)sum, (int)(product)};
}