#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> expected = {3, 4, 5, 6, 7};
    std::vector<int> result = make_a_pile(3);
    assert(issame(result, expected));
    
    return 0;
}