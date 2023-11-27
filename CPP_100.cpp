#include <vector>
#include <cassert>

vector<int> make_a_pile(int n);

bool issame(vector<int> a, vector<int> b);

int main() {
    // Test cases
    vector<int> stones = make_a_pile(5);
    assert(stones == vector<int>{5, 6, 7, 8, 9});

    stones = make_a_pile(4);
    assert(stones == vector<int>{4, 5, 6, 7});

    return 0;
}

vector<int> make_a_pile(int n) {
    vector<int> stones;
    int count = n;
    for (int i = 0; i < n; i++) {
        stones.push_back(count);
        count += (n % 2 == 0) ? 2 : 1;
    }
    return stones;
}

bool issame(vector<int> a, vector<int> b) {
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