```cpp
#include <algorithm>
#include <vector>
#include <initializer_list>

bool isSame(std::vector<int> a, std::vector<int> b) {
    return (a == b);
}

int main_test() {
    std::vector<int> input = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    auto uniqueOutput = std::unique(input.begin(), input.end()); 
    for (auto i = input.begin(); i != --uniqueOutput; ++i) {
        std::cout << *i << " ";
    }
    std::cout << std::endl;

    assert(isSame(std::vector<int>(input.begin(), uniqueOutput), {0, 2, 3, 5, 9, 123}));
}