#include <iostream>
#include <vector>
#include <utility>
#include <cassert>

using namespace std;

bool issame(pair<int, int> a, pair<int, int> b) {
    return a.first == b.first && a.second == b.second;
}

pair<int, int> sum_product(vector<int> numbers) {
    int sum = 0;
    int product = 1;
    for (int num : numbers) {
        sum += num;
        product *= num;
    }
    return {sum, product};
}

int main() {
    assert(issame(sum_product({10}), make_pair(10, 10)));
    return 0;
}