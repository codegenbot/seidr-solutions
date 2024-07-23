#include <vector>
#include <algorithm>

std::vector<int> filter_integers(std::vector<int> numbers) {
    std::vector<int> result;
    for (int num : numbers) {
        if (num >= 0 && '0' <= static_cast<char>(num) && static_cast<char>(num) <= '9') {
            result.push_back(num);
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}