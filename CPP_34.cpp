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
    std::vector<int> input;
    int n;
    std::cin >> n;
    for(int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        input.push_back(x);
    }
    
    auto unique_end = distinct(input.begin(), input.end());
    std::vector<int> output(input.begin(), unique_end);

    for (int i : output) {
        std::cout << i << " ";
    }

    std::vector<int> v = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    auto end = std::unique(v.begin(), v.end());
    assert(issame(std::vector<int>(v.begin(), end), {0, 2, 3, 5, 9, 123}));
}