#include <vector>
#include <iostream>

bool isSame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<int> make_a_pile(int n) {
    vector<int> pile;
    for (int i = n; i > 0; --i) {
        pile.push_back(i * 2);
    }
    return pile;
}

int main() {
    assert(isSame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
    vector<int> pile1 = make_a_pile(6); 
    for (int i : pile1) {
        std::cout << i << " ";
    }
    std::cout << "\n";
    return 0;
}