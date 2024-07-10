#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return (a == b);
}

template<typename It>
It distinct(It first, It last) {
    if (first == last)
        return first;

    vector<typename std::iterator_traits<It>::value_type> result;
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
    vector<int> input = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    auto output(distinct(input.begin(), input.end()));
    auto end = std::unique(output.begin(), output.end());
    for (int i : vector<int>(output.begin(), end)) {
        std::cout << i << " ";
    }
}