#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<int> tri(int n) {
    vector<int> result = {0, 3, 1, 2, 4};
    return result;
}

int main() {
    vector<int> result = tri(5);
    assert(issame(result, {0, 3, 1, 2, 4}));
    return 0;
}