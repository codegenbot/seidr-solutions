#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> tri(int n) {
    vector<int> result(n);
    iota(result.begin(), result.end(), 0);
    return result;
}

int main() {
    vector<int> result = tri(5);
    assert(equal(result.begin(), result.end(), {0, 1, 2, 3, 4}.begin()));
    return 0;
}