#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    std::vector<int> vec1, vec2;
    // Read input for vec1 and vec2
    // Assuming input is read into vec1 and vec2
    bool result = issame(vec1, vec2);
    return result;
}