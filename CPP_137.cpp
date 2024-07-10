#include <iostream>
#include <string>
#include <boost/any.hpp>
#include <cassert>

using namespace std;
using namespace boost;

string compare_one(const string& s, const any& a) {
    if (a.type() == typeid(int)) {
        return "None";
    }
    return "Not None";
}

int main() {
    assert(boost::any_cast<string>(compare_one("1", boost::any(1))) == "None");
    return 0;
}