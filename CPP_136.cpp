#include <vector>
#include <climits>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size()) {
        return false;
    }
    
    for(int i = 0; i < a.size(); ++i) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    // Test issame function
    std::vector<int> test1 = {1, 2, 3};
    std::vector<int> test2 = {1, 2, 3};
    assert(issame(test1, test2) == true);
    
    std::vector<int> test3 = {4, 5, 6};
    std::vector<int> test4 = {4, 5};
    assert(issame(test3, test4) == false);
    
    return 0;
}