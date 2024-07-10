#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

namespace std {
    template<typename It>
    It distinct(It first, It last) {
        if (first == last)
            return first;

        std::set<typename std::iterator_traits<It>::value_type> result;
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

        return result.begin();
    }
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main_test() { 
    std::vector<int> input = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    auto output = input; // Create a copy of the input vector
    auto uniqueOutput = std::unique(output.begin(), output.end()); // Use std::unique to get the unique elements
    for (auto i = output.begin(); i != uniqueOutput; ++i) {
        std::cout << *i << " ";
    }
    std::cout << std::endl;

    assert(issame({0, 2, 3, 5, 9, 123}, std::vector<int>(std::unique(input.begin(), input.end()), input.end())));
}