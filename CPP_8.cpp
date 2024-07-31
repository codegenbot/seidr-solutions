#include <vector>

struct SumProduct {
    int sum;
    int product;
};

SumProduct issame(vector<int> a, vector<int> b) {
    int sum = 0;
    int product = 1;
    for (int num : a) {
        sum += num;
        product *= num;
    }
    return SumProduct{sum, product};
}