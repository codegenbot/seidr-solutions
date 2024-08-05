#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> rolling_max(std::vector<int> numbers) {
    std::vector<int> result;
    int n = numbers.size();
    
    if(n == 0) {
        return result;
    }

    result.push_back(numbers[0]);

    for(int i = 1; i < n; i++) {
        result.push_back(std::max(result.back(), numbers[i]));
    }

    return result;
}