
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> make_a_pile(int n) {
    vector<int> levels;
    levels.push_back(n);
    for (int i = 1; i < n; i++) {
        if (n % 2 == 0) {
            n += 2;
        } else {
            n += 1;
        }
        levels.push_back(n);
    }
    return levels;
}

int main() {
    assert(issame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
    return 0;
}