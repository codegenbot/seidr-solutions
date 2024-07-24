```cpp
#include <boost/any.hpp>
#include <vector>
#include <list>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).type()) {
            int integer = boost::any_cast<int>(value);
            bool found = false;
            for (auto it = result.begin(); it != result.end(); ++it) {
                if (*it == integer) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                result.push_back(integer);
            }
        }
    }
    return result;
}