#include <vector>
#include <list>
#include <boost/any.hpp>
#include <cassert>

std::vector<int> filter_integers(std::list<boost::any> values);

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}