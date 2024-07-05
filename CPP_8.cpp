#include <vector>
#include <cassert>

using namespace std;

vector<int> sum_product(vector<int> numbers) {
    int sum = 0;
    int product = 1;

    for(int num : numbers) {
        sum += num;
        product *= num;
    }

    return {sum, product};
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert (issame(sum_product({10}) ,{10, 10}));
    assert (issame(sum_product({1, 2, 3, 4}) ,{10, 24}));
    return 0;
}