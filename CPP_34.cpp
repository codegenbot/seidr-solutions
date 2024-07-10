```cpp
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

int issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size())
        return 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return 0;
    }
    return 1;
}

int main_test() { 
    std::vector<int> input = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    auto output = std::distinct(input.begin(), input.end());
    for (auto i : std::unique(output.begin(), output.end())) {
        std::cout << i << " ";
    }
    
    assert(issame({5, 3, 5, 2, 3, 3, 9, 0, 123}, {0, 2, 3, 5, 9, 123}));
}