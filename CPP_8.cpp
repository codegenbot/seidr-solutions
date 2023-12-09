#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

int sum_product(const int& number) {
    return number * (number + 1);
}

int main() {
    assert (issame(sum_product({10}) ,{20, 20}));
    return 0;
}