#include <algorithm>
#include <vector>
#include <iostream>

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

void solveProblem() {
    std::vector<int> input;
    int n;
    std::cin >> n;
    for(int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        input.push_back(x);
    }
    
    auto unique_end = std::unique(input.begin(), input.end());
    std::vector<int> output(input.begin(), unique_end);
    std::sort(output.begin(), output.end());
    
    for (int i : output) {
        std::cout << i << " ";
    }
}