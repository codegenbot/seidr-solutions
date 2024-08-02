```cpp
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> l;
    std::cin >> l[0];
    for(int i = 1; i < 4; i++) {
        int num;
        std::cin >> num;
        l.push_back(num);
    }
    return *std::max_element(l.begin(), l.end());
}