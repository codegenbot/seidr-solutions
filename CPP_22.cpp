#include <boost/any.hpp>
#include <vector>
#include <list>
#include <optional>

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) {
            int num = boost::get<int>(value);
            result.push_back(num);
        }
    }
    return result;
}