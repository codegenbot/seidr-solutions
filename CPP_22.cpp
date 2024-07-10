#include <vector>
#include <boost/any.hpp>
#include <cassert>

std::vector<int> filter_integers(const std::list<boost::any>& values) {
    std::vector<int> result;
    for(const auto &val : values) {
        if(auto int_ptr = boost::any_cast<int>(&val)) {
            result.push_back(*int_ptr);
        }
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}