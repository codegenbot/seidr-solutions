#include <vector>
#include <list>
#include <any>
#include <boost/any.hpp>

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int) && boost::any_cast<int>(value) != 0) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    assert(std::vector({1, 2, 3}) == filter_integers({1, 2, 3}));
}