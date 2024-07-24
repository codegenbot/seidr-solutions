#include <vector>
#include <cassert>

bool issame(int a, int b) {
    return a == b;
}

std::vector<int> incr_list(std::vector<int> l) {
    for (int i = 0; i < l.size(); i++) {
        l[i]++;
    }
    return l;
}

int main() {
    std::vector<int> test = {1, 2, 3, 4};
    std::vector<int> expected = {2, 3, 4, 5};
    
    assert(issame(incr_list(test), expected));
    
    return 0;
}