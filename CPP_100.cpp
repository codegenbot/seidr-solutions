#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return (a == b);
}

std::vector<int> make_a_pile(int n) {
    vector<int> pile;
    for (int i = 1; i <= n; ++i) {
        pile.push_back(i % 2 == 0 ? i + 1 : i);
    }
    return pile;
}

int main() {
    assert(std::issame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
    
}