#include <vector>
#include <numeric>

vector<int> sum_product(vector<int> numbers) {
    if (numbers.empty()) {
        return {0, 1};
    }
    int sum = accumulate(numbers.begin(), numbers.end(), 0);
    int product = accumulate(numbers.begin(), numbers.end(), 1);
    return {sum, product};
}