#include <boost/any.hpp>
#include <list>
#include <vector>
#include <algorithm>

bool is_same(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<boost::any> filter_integers(std::list<boost::any> values) {
    std::vector<boost::any> result;
    for (const auto& value : values) {
        if(boost::any_cast<int>(value).good()) {
            result.push_back(value);
        }
    }
    return result;
}

int main() {
    assert(is_same(std::vector<int>(filter_integers({3, 'c', 3, 3, 'a', 'b'})).begin(), std::vector<int>({1,2,3}).begin());
    return 0;
}