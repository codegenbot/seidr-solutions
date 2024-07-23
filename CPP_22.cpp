```cpp
#include <vector>
#include <algorithm>

std::vector<int> filter_integers(std::vector<std::string> numbers) {
    std::vector<int> result;
    for (const auto& num : numbers) {
        if (num.find_first_not_of("0123456789") == std::string::npos) {
            result.push_back(stoi(num));
        }
    }
    return result;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}