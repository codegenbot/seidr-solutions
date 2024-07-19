#include <vector>
#include <cassert>

std::vector<int> incr_list(std::vector<int> l) {
    for (int i = 0; i < l.size(); i++) {
        l[i]++;
    }
    return l;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    std::vector<int> input = {1, 2, 3, 4};
    
    std::vector<int> result = incr_list(input);
    
    assert(result == std::vector<int>{2, 3, 4, 5});
    
    return 0;
}