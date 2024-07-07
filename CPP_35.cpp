#include <vector>
#include <algorithm>

int main() {
    std::vector<float> l;
    // read input from user
    float x;
    while(std::cin >> x) {
        l.push_back(x);
    }
    auto it = std::max_element(l.begin(), l.end());
    return *it;
}