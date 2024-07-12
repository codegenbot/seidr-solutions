#include <vector>
#include <cassert>

std::vector<int> make_a_pile(int start_num) {
    std::vector<int> pile;
    for(int i = 0; i < 8; i++) {
        pile.push_back(start_num + 2 * i);
    }
    return pile;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(make_a_pile(8), std::vector<int>{8, 10, 12, 14, 16, 18, 20, 22}));
    
    return 0;
}