```c++
#include <boost/any.hpp>
#include <vector>
#include <list>
#include <cassert>

bool is_same(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).good()) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    assert(is_same(filter_integers({3, 'c', 3, 3, 'a', 'b'}) , std::vector<int>{1, 2, 3}));
}