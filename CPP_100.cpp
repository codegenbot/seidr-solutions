#include <initializer_list>

#include <vector>
#include <algorithm>

bool isSame(vector<int> a, vector<int> b);

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    for (int i = 1; i <= n; ++i) {
        pile.push_back(i * 2 - 1);
    }
    return pile;
}

bool isSame(const vector<int>& a, const vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(isSame(make_a_pile(8), {1, 3, 5, 7, 9, 11, 13, 15}) == true);
    return 0;
}