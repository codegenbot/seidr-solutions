#include <boost/any.hpp>
#include <vector>
#include <list>

bool issame(std::vector<int> a, std::vector<int> b) {
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> filter_integers(const boost::any& values) {
    std::vector<int> result;
    for (const auto& value : boost::any_cast<std::list<boost::any>>(values)) {
        if (boost::any_cast<bool>(value)) {
            try {
                result.push_back(boost::any_cast<int>(value));
            } catch (...) {
                // handle the exception
                return result;
            }
        }
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}