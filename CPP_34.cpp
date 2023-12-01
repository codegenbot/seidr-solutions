#include <vector>
#include <algorithm>

bool are_same(std::vector<int> a, std::vector<int> b) {
    // Implementation of the `are_same` function
}

std::vector<int> unique_numbers(std::vector<int> l) {
    std::sort(l.begin(), l.end());
    l.erase(std::unique(l.begin(), l.end()), l.end());
    return l;
}

int main() {
    // Test cases
    assert(are_same(unique_numbers({5, 3, 5, 2, 3, 3, 9, 0, 123}), {0, 2, 3, 5, 9, 123}));
    // Add more test cases if needed
  
    return 0;
}