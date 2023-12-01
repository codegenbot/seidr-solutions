#include <vector>
#include <iostream>
#include <cassert>

using namespace std;

vector<int> sum_product(vector<int> numbers) {
    int sum = 0;
    int product = 1;

    for (int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
        product *= numbers[i];
    }

    return {sum, product};
}

int main() {
    vector<int> result = sum_product({10});
    assert(result == vector<int>{10, 10});

    return 0;
}