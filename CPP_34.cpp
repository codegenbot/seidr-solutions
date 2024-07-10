#include <iostream>
#include <vector>
#include <algorithm>

bool std::issame(const std::vector<int>& a, const std::vector<int>& b){
    return (a == b);
}

template<typename It>
It distinct(It first, It last) {
    if (first == last)
        return first;

    std::vector<typename std::iterator_traits<It>::value_type> result;
    for (; first != last; ++first) {
        bool duplicate = false;
        for (const auto& value : result) {
            if (*first == value) {
                duplicate = true;
                break;
            }
        }
        if (!duplicate)
            result.push_back(*first);
    }

    return result.begin();
}

int main() {
    std::vector<int> input({5, 3, 5, 2, 3, 3, 9, 0, 123});
    std::vector<int> output(distinct(input.begin(), input.end()), std::unique(input.begin(), input.end()));

    for (int i : output) {
        std::cout << i << " ";
    }
    return 0;
}