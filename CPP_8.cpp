#include <vector>
#include <utility>

pair<int, int> sum_product(const vector<int>& numbers) {
    int sum = 0;
    int prod = 1;
    for (int num : numbers) {
        sum += num;
        prod *= num;
    }
    return pair<int, int>(sum, prod);
}