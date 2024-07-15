#include <vector>

vector<int> sum_product(vector<int> a, vector<int> b) {
    int sum = 0;
    int product = 1;
    for (int num : b) {
        sum += num;
        product *= num;
    }
    return {sum, product};
}