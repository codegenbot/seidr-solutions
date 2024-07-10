```cpp
#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> distinct(std::vector<int>::iterator first, std::vector<int>::iterator last) {
    if (first == last)
        return {};

    std::set<int> result;
    for (; first != last; ++first) {
        bool duplicate = false;
        for (const auto& value : result) {
            if (*first == value) {
                duplicate = true;
                break;
            }
        }
        if (!duplicate)
            result.insert(*first);
    }

    std::vector<int> output(result.begin(), result.end());
    return output;
}

int main_test() { 
    std::vector<int> input = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    auto output = distinct(input.begin(), input.end());
    for (auto i : output) {
        std::cout << i << " ";
    }
}