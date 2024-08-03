```cpp
#include <boost/any.hpp>
#include <vector>
#include <list>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        try {
            int val = boost::any_cast<int>(value);
            if (val.good()) {
                result.push_back(val);
            }
        } catch(const boost::bad_any_cast&) {
            // skip non-int values
        }
    }
    return result;
}