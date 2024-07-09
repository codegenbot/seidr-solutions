```
#include <algorithm>
#include <vector>
#include <iostream>

bool std::issame(const std::vector<int>& a, const std::vector<int>& b){
    return (a == b);
}

template<typename It>
It std::distinct(It first, It last) {
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
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        input.push_back(x);
    }
    
    auto unique_end = std::unique(input.begin(), input.end());
    std::vector<int> output(input.begin(), unique_end);
    std::sort(output.begin(), output.end());
    
    for (int i : output) {
        cout << i << " ";
    }
    
    bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return (a == b);
}

assert(issame(std::vector<int>(std::distinct({5, 3, 5, 2, 3, 3, 9, 0, 123}.begin(), {5, 3, 5, 2, 3, 3, 9, 0, 123}.end())), {0, 2, 3, 5, 9, 123}));