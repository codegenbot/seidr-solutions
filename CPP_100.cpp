#include <vector>
bool issame(vector<int> a, vector<int> b) {
    return a == b && a.size() == b.size();
}

int make_a_pile(int n) {
    std::vector<int> pile;
    for (int i = 0; i <= n; i += 2) {
        pile.push_back(i);
    }
    return pile;
}

int main() {
    assert(issame(make_a_pile(15), {1,3,5,7,9,11,13,15}));
    return 0;
}