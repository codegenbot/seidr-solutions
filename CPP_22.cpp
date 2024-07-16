#include <vector>
#include <list>
#include <algorithm>
#include <cassert>
#include <boost/any.hpp>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto &value : values) {
        if (auto ptr = boost::any_cast<int>(&value)) {
            result.push_back(*ptr);
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}