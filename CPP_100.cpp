// Replace vector<int> with std::vector<int> in the issame function
bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

// Add include for vector header
#include <vector>

// Update int main() to return int explicitly
int main() {
    assert(issame(make_a_pile(8), std::vector<int>{8, 10, 12, 14, 16, 18, 20, 22}));

    return 0;
}