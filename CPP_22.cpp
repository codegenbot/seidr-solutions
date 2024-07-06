```cpp
#include <boost/any.hpp>
#include <vector>
#include <list>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (auto& value : values) {
        if (!value.empty() && boost::any_cast<int>(value) != 0) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    std::list<boost::any> values = {{1}, {2, 3, 4}, {5}};
    auto filtered = filter_integers(values);

    assert(issame(filtered, std::vector<int>{1, 2, 3, 4, 5}));

    return 0;
}