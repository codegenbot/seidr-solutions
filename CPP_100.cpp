#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return (a == b);
}

vector<int> make_a_pile(int n) {
    vector<int> result;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0)
            result.push_back(i * 2 - 1);
        else
            result.push_back(i * 2);
    }
    return result;
}

int main() {
    assert(issame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
    return 0;
}