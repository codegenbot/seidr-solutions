#include <vector>
#include <algorithm>

int main() {
    std::vector<int> l;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> x;
        l.push_back(x);
    }
    std::vector<float> v(l.begin(), l.end());
    return *std::max_element(v.begin(), v.end());