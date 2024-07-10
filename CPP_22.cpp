```cpp
#include <vector>
#include <list>
#include <boost/any.hpp>
#include <boost/lexical_cast.hpp>

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::holds_alternative<bool>(value)) {
            try {
                int val = boost::get<int>(boost::get<1>(value));
                result.push_back(val);
            } catch (boost::bad_get&) {}
        }
    }
    return result;
}