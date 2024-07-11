#include <vector>

using namespace std;

vector<pair<int, int>> sum_product(vector<int> numbers) {
    int sum = 0;
    long product = 1;

    for (int num : numbers) {
        sum += num;
        product *= num;
    }

    return {{sum, product}};
}