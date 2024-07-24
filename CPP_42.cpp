#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> incr_list(std::vector<int> l) {
    for (int i = 0; i < l.size(); i++) {
        l[i]++;
    }
    return l;
}

// Testing
int main() {
    std::vector<int> input = {1, 2, 3};
    std::vector<int> output = {2, 3, 4};
    
    assert(issame(incr_list(input), output));
    
    return 0;
}