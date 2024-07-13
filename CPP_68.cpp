#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    // implement your comparison logic here
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(pluck({7, 9, 7, 1}) == vector<int>());
    return 0;
}