#include <vector>

using namespace std;

vector<int> sum_product(vector<int> numbers) {
    int sum = 0;
    long product = 1;

    for (int num : numbers) {
        sum += num;
        product *= num;
    }

    return {(sum == 0) ? 0 : sum, (product == 1 || product == 0) ? 1 : product};
}