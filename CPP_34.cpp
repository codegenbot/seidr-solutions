#include <algorithm>
#include <vector>
#include <iostream>

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
    int n;
    std::cin >> n;
    for(int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
    }
    
    auto unique_end = distinct(input.begin(), input.end());
    std::vector<int> output(input.begin(), unique_end);
    std::sort(output.begin(), output.end());
    
    for (int i : output) {
        std::cout << i << " ";
    }
    assert(std::is_same(std::vector<int>({5, 3, 5, 2, 3, 3, 9, 0, 123}), {0, 2, 3, 5, 9, 123}));
    return 0;
}