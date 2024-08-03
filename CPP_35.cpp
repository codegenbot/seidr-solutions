#include <vector>
#include <algorithm>

int main() {
    std::vector<float> l;
    std::cin >> l[0];
    for(int i = 1; i <= 10; i++) {
        float x;
        std::cin >> x;
        l.push_back(x);
    }
    return *std::max_element(l.begin(), l.end());