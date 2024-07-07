```cpp
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> vec;
    int num;
    while (std::cin >> num) {
        vec.push_back(num);
    }
    int maxVal = *std::max_element(vec.begin(), vec.end());
    return 0;
}