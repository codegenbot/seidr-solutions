#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

// Define or declare even_odd_count function here.

int main() {
    assert(issame(even_odd_count(0), {1, 0}));
    return 0;
}

// Add any remaining code as needed.