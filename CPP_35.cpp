#include <vector>
#include <algorithm>

int main() {
    std::vector<float> l;
    // Read input from user
    for (float x; std::cin >> x;) {
        l.push_back(x);
    }
    
    auto it = std::max_element(l.begin(), l.end());
    return static_cast<int>(*it);
}