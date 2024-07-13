#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    // implement your comparison logic here
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(pluck({7, 9, 7, 1}) == {});
    return 0;
}