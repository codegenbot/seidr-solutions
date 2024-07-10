#include <iostream>
#include <vector>
#include <algorithm>

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

int main_test() { 
    std::vector<int> input = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    auto output = input; // Create a copy of the input vector
    output.erase(std::unique(output.begin(), output.end()), output.end()); // Use std::unique to get the unique elements
    for (auto i = output.begin(); i != output.end(); ++i) {
        std::cout << *i << " ";
    }
    std::cout << std::endl;
}