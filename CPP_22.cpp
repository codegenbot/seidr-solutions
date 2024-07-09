#include <boost/any.hpp>
#include <vector>
#include <list>

bool boost::core::algorithm::is_same(const boost::any& a, const boost::any& b) {
    if (!boost::any_cast<bool>(a) || !boost::any_cast<bool>(b))
        return false;
    // your comparison logic here
}

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
    assert(is_same(filter_integers({3, boost::any('c'), 3, 3, boost::any('a'), boost::any('b')}), {3, 3, 3}));
}