#include <iostream>
#include <vector>
#include <boost/any.hpp>
#include <typeinfo>
#include <list>
#include <cassert>

std::vector<int> filter_integers(std::list<boost::any> values);

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}