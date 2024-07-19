#include <vector>
#include <cassert>

using namespace std;

vector<int> issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> sum_product(const vector<int>& numbers) {
    int sum = 0, product = 1;
    for (int num : numbers) {
        sum += num;
        product *= num;
    }
    return {sum, product};
}

int main() {
    assert(issame(sum_product({10}), {10, 10}));
    return 0;
}