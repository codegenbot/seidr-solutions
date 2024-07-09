#include <vector>
#include <algorithm>

bool issame(std::vector a, std::vector b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); ++i) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector issame(std::vector a, std::vector b){
    if(a.size() != b.size()) return {};
    for(int i = 0; i < a.size(); ++i) {
        if(a[i] != b[i]) return {};
    }
    return a;
}

int main() {
    assert(issame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}) == {8, 10, 12, 14, 16, 18, 20, 22});
    return 0;
}

std::vector make_a_pile(int n) {
    std::vector pile;
    for (int i = 2 * n; i > 0; --i) {
        pile.push_back(i);
    }
    return pile;
}