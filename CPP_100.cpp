#include <iostream>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    int num = 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            pile.push_back(num);
            num += 2;
        } else {
            pile.push_back(num);
            num++;
        }
    }
    return pile;
}

int main() {
    assert(issame(make_a_pile(8), {1, 2, 3, 4, 5, 6, 7, 8}));
    return 0;
}