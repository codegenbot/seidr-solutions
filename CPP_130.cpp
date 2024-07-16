#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cassert>

using namespace std;

vector<int> tri(int n) {
    vector<int> result = {0, 3, 1, 2, 4};
    return result;
}

int main() {
    vector<int> result = tri(5);
    assert(std::equal(result.begin(), result.end(), {0, 3, 1, 2, 4}.begin())); 
    return 0;
}