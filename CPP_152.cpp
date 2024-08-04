// Add missing includes
#include <vector>
#include <cassert>

// Declare function prototype at the top
bool issame(std::vector<int> a, std::vector<int> b);

// Implement the issame function
bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

// Modify main function to include compare function
int main() {
    assert(issame(compare({1,2,3,5},{-1,2,3,4}), {2,0,0,1}));
    return 0;
}