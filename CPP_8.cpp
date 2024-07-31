#include <vector>

struct SumProduct {
    int sum;
    int product;
};

SumProduct sum_product(vector<int> numbers) {
    int sum = 0;
    int product = 1;
    for (int num : numbers) {
        sum += num;
        product *= num;
    }
    return SumProduct{sum, product};
}