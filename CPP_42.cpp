#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
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

std::vector<int> incr_list(std::vector<int> l) {
    for (int i = 0; i < l.size(); i++) {
        l[i]++;
    }
    return l;
}

int main() {
    std::vector<int> test_input = {1, 2, 3, 4};
    std::vector<int> expected_output = {2, 3, 4, 5};
    
    std::vector<int> result = incr_list(test_input);
    
    assert(issame(result, expected_output));
    
    return 0;
}