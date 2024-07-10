#include <vector>
#include <algorithm>

bool issame(std::vector<int>& a, std::vector<int>& b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

int main() {
    // Example usage
    std::vector<int> a = {135, 103, 31};
    std::vector<int> b = {31, 135};
    
    assert(issame(a, b));
    
    return 0;
}