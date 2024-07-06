#include <vector>
#include <algorithm>

int issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (std::equal(a.begin(), a.end(), b.begin(), b.end())) {
        return 1; 
    } else {
        return 0;
    }
}

int main() {
    // Your code here...
    return 0;
}