#include <vector>
#include <list>
#include <boost/any.hpp>

std::vector<int> filter_integers(const std::list<boost::any>& values) {
    std::vector<int> integers;

    for (const auto& value : values) {
        if (auto integer = boost::any_cast<int>(&value)) {
            integers.push_back(*integer);
        }
    }

    return integers;
}