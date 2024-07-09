#include <iostream>
#include <vector>
#include <utility>
#include <cassert>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

pair<int, int> sum_product(const vector<int>& numbers);

int main() {
    assert(issame(sum_product({10}), {10, 10}));
    
    cout << "Test passed!";
    
    return 0;
}

pair<int, int> sum_product(const vector<int>& numbers) {
    int sum = 0;
    int prod = 1;
    for (int num : numbers) {
        sum += num;
        prod *= num;
    }
    return make_pair(sum, prod);
}