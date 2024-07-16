#include <iostream>
#include <cassert>
#include <boost/any.hpp>

using namespace std;
using boost::any_cast;

int main() {
    assert(any_cast<string>(compare_one(string("1"), string("2"))) == "2");

    return 0;
}