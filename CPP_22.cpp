```cpp
#include <vector>
#include <list>
#include <boost/any.hpp>

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        int castedValue = boost::any_cast<int>(value);
        if (!boost::is_none(castedValue)) {
            result.push_back(castedValue);
        }
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(filter_integers({3, 3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
}