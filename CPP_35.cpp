```cpp
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> l; 
    std::cin >> l[0];
    for(int i = 1; i < 3; i++) {
        int temp;
        std::cin >> temp;
        l.push_back(temp);
    }
    return *std::max_element(l.begin(), l.end());
}