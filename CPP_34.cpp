#include <algorithm>
#include <vector>
#include <iostream>

bool std::issame(std::vector<int> a, std::vector<int> b){
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
    
    assert(std::equal({0, 2, 3, 5, 9, 123}.begin(), {0, 2, 3, 5, 9, 123}.end(), std::vector<int>(std::distinct(input.begin(), input.end()).begin(), std::distinct(input.end())));

    return;
}