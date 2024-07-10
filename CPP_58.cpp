#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return (a == b);
}

int main() {
    // Fix: define 'common' variable
    std::vector<int> common({4, 3, 2, 8});
    
    assert(issame(common, {})); 

    return 0;
}