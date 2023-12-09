
#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

int sum_product(const int& number) {
    return number * (number + 1);
}

bool issame(int a, int b) {
    return a == b;
}

int main() {
    assert(issame(sum_product(10), 10 * (10 + 1)));
    return 0;
}