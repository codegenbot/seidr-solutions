#include <algorithm>
#include <cmath>

int main() {
    std::vector<int> l;
    int num;
    while (std::cin >> num) {
        l.push_back(num);
    }
    auto max_val = *max_element(l.begin(), l.end());
    return abs(max_val);
}