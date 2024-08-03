#include <vector>
#include <algorithm>

int main() {
    std::vector<float> l;
    std::cout << "Enter numbers (space-separated): ";
    for (float x; std::cin >> x;) 
        l.push_back(x);
    return *std::max_element(l.begin(), l.end());
}