#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    // implement your comparison logic here
    return a == b;
}

int main() {
    assert(pluck({7, 9, 7, 1}) == vector<int>());
    return 0;
}