```
#include <iostream>
#include <vector>

int main() {
    std::vector<int> input = {1, 2, 3, 4, 5};
    auto result = cutVector(input);
    std::cout << "The two resulting subvectors are: ";
    for (auto it : result) {
        std::cout << it << " ";
    }
    return 0;
}
```