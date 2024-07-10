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
    std::vector<int> uniqueInput(input.begin(), input.end());
    auto output = std::distinct(uniqueInput.begin(), uniqueInput.end());
    for (auto i : output) {
        std::cout << i << " ";
    }
    assert(std::distinct({5, 3, 5, 2, 3, 3, 9, 0, 123}) == std::vector<int>({0, 2, 3, 5, 9, 123}));
}