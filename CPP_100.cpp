#include <vector>
#include <algorithm>

bool vectorSame(const std::vector<int>& a, const std::vector<int>& b) {
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

std::vector<int> makeApile(int n) {
    std::vector<int> pile;
    for (int i = 2 * n; i > 0; i -= 2)
        pile.push_back(i);
    return pile;
}

int main() {
    assert(makeApile(8).size() == 4 && std::all_of(makeApile(8).begin(), makeApile(8).end(), [&](int x) {return x % 2 == 0; }));
    return 0;
}