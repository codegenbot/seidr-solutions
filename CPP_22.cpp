#include <any>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) { 
    return std::equal(a.begin(), a.end(), b.begin(), b.end()); 
}

std::vector<int> filter_integers(std::any values) {
    std::vector<int> result;
    for (const auto& value : any_cast<std::vector<int>>(values)) {
        if (std::any_cast<bool>(values.type()) && issame(int(value), 0)) {
            result.push_back(int(value));
        }
    }
    return result;
}