```cpp
#include <boost/any.hpp>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> filter_integers(std::vector<boost::any>& values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::holds_alternative<int>(value)) {
            int x = boost::get<int>(value);
            if (x != 0) {
                result.push_back(x);
            }
        }
    }
    return result;
}