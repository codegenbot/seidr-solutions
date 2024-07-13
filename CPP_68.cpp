#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    // implement your comparison logic here
}

int main() {
    vector<int> result = pluck({7, 9, 7, 1});
    assert(result.size() == 2);
    assert(result[0] == 0 && result[1] == 3);
    return 0;
}