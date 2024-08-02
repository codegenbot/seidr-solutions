#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b; 
}

int main() {
    // Existing code
    assert(issame(f(3), {1, 2, 6})); // Add this line in main()
    return 0;
}