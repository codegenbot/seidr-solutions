#include <boost/any.hpp>
#include <algorithm>
#include <string>
#include <cassert>
#include <cmath>

using namespace std;

// Task: Complete the following function
// Signature: ??? compare_one(boost::any a, boost::any b)
{
    if(a == b) return -1;
    if(a.type() == typeid(int) && b.type() == typeid(float)) return max(boost::any_cast<int>(a), boost::any_cast<float>(b));
    if(a.type() == typeid(float) && b.type() == typeid(int)) return max(boost::any_cast<float>(a), boost::any_cast<int>(b));
    if(a.type() == typeid(string) && b.type() == typeid(int)) return max(stof(boost::any_cast<string>(a)), boost::any_cast<int>(b));
    if(a.type() == typeid(int) && b.type() == typeid(string)) return max(boost::any_cast<int>(a), stof(boost::any_cast<string>(b)));
    if(a.type() == typeid(string) && b.type() == typeid(float)) return max(stof(boost::any_cast<string>(a)), boost::any_cast<float>(b));
    if(a.type() == typeid(float) && b.type() == typeid(string)) return max(boost::any_cast<float>(a), stof(boost::any_cast<string>(b)));
    return -1;
}