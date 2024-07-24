#include <iostream>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
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
        pile.push_back((i % 2 == 0) ? num : num + 1);
        if ((i % 2 == 0 && num != 3) || (i % 2 != 0 && num != 2))
            num = (num % 2 == 0) ? num + 2 : num + 1;
    }
    return pile;
}

int main() {
    assert(issame(make_a_pile(8), {1, 2, 3, 4, 5, 6, 7, 8}));
    return 0;
}