#include <vector>
#include <cassert>

bool issame(const std::vector<int>& l1, const std::vector<int>& l2) {
    return l1 == l2;
}

std::vector<int> incr_list(std::vector<int> l) {
    for (int i = 0; i < l.size(); i++) {
        l[i]++;
    }
    return l;
}

// Testing the functions
int main() {
    std::vector<int> input = {1, 2, 3};
    std::vector<int> expected = {2, 3, 4};
    
    assert(issame(incr_list(input), expected));
    
    return 0;
}