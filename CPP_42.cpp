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
    std::vector<int> test_vec = {1, 2, 3, 4, 5};
    
    assert(issame(1, 1));
    
    std::vector<int> result = incr_list(test_vec);
    
    return 0;
}