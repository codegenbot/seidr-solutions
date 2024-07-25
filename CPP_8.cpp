#include <vector>
#include <utility>
#include <cassert>

using namespace std;

bool issame(const pair<int, int>& a, const pair<int, int>& b) {
    return a == b;
}

pair<int, int> sum_product(const vector<int>& numbers) {
    int sum = 0;
    int product = 1;
    for (int num : numbers) {
        sum += num;
        product *= num;
    }
    return make_pair(sum, product);
}