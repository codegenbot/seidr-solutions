#include <vector>
#include <list>
#include <any>
#include <cassert>
#include <boost/any.hpp>

bool isSame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> filterIntegers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    assert(isSame(filterIntegers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}