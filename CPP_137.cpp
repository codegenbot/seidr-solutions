#include <iostream>
#include <string>
#include <cassert>
#include <boost/any.hpp>
#include <boost/any_cast.hpp>

using namespace std;

boost::any compare_one(const string& s, int n) {
    return boost::any(s);
}

int main() {
    assert(!boost::any_cast<string>(compare_one("1", 1)).empty());
    return 0;
}