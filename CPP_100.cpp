#include <vector>
#include <cassert>

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    auto make_a_pile = [](int n) {
        vector<int> result;
        for (int i = 1; i <= n; ++i) {
            result.push_back(2 * i + 6);
        }
        return result;
    };

    assert(issame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
    return 0;
}