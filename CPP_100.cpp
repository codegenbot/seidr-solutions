#include <vector>
#include <cassert>

bool is_same(std::vector<int> a, std::vector<int> b);
std::vector<int> make_a_pile(int n);

int main(int argc, const char* argv[]) {
    assert(is_same(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
}

bool is_same(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    int stones = n;
    while (stones > 0) {
        pile.push_back(stones);
        if (n % 2 == 1) {
            n++;
            stones = n;
        } else {
            n++;
            stones = n * 2;
        }
    }
    return pile;
}