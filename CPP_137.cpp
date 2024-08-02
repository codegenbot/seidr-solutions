#include <any>
#include <string>
#include <cassert>
#include <boost/any.hpp>

using namespace std;

assert (boost::any_cast<string>(compare_one(string("1"), string("1"))).c_str() == nullptr);