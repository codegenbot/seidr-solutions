Here is the modified code:

```cpp
#include <iostream>
#include <string>

auto findIndices(std::string text, std::string target) -> std::vector<int> {
    std::vector<int> indices;
    int prevLast = 0;
    while ((int last = text.find(target, prevLast)) != std::string::npos) {
        indices.push_back(last + 1);
        prevLast = last + 1;
    }
    return indices;
}

int main() {
    std::string text;
    std::cin >> text;

    std::string target;
    std::cin >> target;

    auto indices = findIndices(text, target);
    for (int i : indices) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}