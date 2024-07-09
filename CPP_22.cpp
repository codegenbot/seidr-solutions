```cpp
#include <vector>
#include <list>
#include <boost/any.hpp>

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).good()) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

bool areEqual(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(areEqual(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}) );
}