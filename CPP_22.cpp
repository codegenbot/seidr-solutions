#include <vector>
#include <list>
#include <boost/any.hpp>

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    std::vector<int> expected = {3, 3, 3};
    std::vector<int> actual = filter_integers({3, 'c', 3, 3, 'a', 'b'});
    assert(actual == expected);
    return 0;
}