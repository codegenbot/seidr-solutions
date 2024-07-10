#include <vector>
#include <list>
#include <boost/any.hpp>
#include <cassert>

std::vector<int> filter_integers(std::list<boost::any> values);

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}