#include <boost/any.hpp>
#include <string>
#include <cassert>

using namespace std;

boost::any compare_one(const boost::any& a, const boost::any& b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (boost::any_cast<int>(a) > boost::any_cast<int>(b)) ? a :
               (boost::any_cast<int>(a) < boost::any_cast<int>(b)) ? b :
               "None";
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return (boost::any_cast<float>(a) > boost::any_cast<float>(b)) ? a :
               (boost::any_cast<float>(a) < boost::any_cast<float>(b)) ? b :
               "None";
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        float a_float = stof(boost::any_cast<string>(boost::any_cast<string>(a).replace(boost::any_cast<string>(a).find(','), 1, ".")));
        float b_float = stof(boost::any_cast<string>(boost::any_cast<string>(b).replace(boost::any_cast<string>(b).find(','), 1, ".")));
        return (a_float > b_float) ? a :
               (a_float < b_float) ? b :
               "None";
    } else {
        return "None";
    }
}

int main() {
    assert(boost::any_cast<string>(compare_one(string("1"), string("1"))) == "None");
    return 0;
}