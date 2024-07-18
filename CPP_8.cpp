#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

using pair = pair<int, int>;

bool issame(pair a, pair b) {
    return a.first == b.first && a.second == b.second;
}

pair sum_product(vector<int> numbers) {
    int sum = 0;
    int product = 1;
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