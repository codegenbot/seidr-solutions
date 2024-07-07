```cpp
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> vec;
    vec.push_back(5);
    vec.push_back(3);
    vec.push_back(-5);
    vec.push_back(2);
    vec.push_back(-3);
    vec.push_back(3);
    vec.push_back(9);
    vec.push_back(0);
    vec.push_back(124);
    vec.push_back(1);
    vec.push_back(-10);

    int maxVal = *std::max_element(vec.begin(), vec.end());
    return 0;
}