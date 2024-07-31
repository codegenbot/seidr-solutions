#include <boost/any.hpp>
#include <string>
#include <cassert>

using namespace std;

boost::any compare_one(const boost::any& a, const boost::any& b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        if (boost::any_cast<int>(a) > boost::any_cast<int>(b)) {
            return a;
        } else if (boost::any_cast<int>(a) < boost::any_cast<int>(b)) {
            return b;
        } else {
            return nullptr;
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        if (boost::any_cast<float>(a) > boost::any_cast<float>(b)) {
            return a;
        } else if (boost::any_cast<float>(a) < boost::any_cast<float>(b)) {
            return b;
        } else {
            return nullptr;
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        float numA = std::stof(boost::any_cast<string>(a).replace(boost::any_cast<string>(a).find(','), 1, "."));
        float numB = std::stof(boost::any_cast<string>(b).replace(boost::any_cast<string>(b).find(','), 1, "."));
        if (numA > numB) {
            return a;
        } else if (numA < numB) {
            return b;
        } else {
            return nullptr;
        }
    }
    return nullptr;
}

int main() {
    assert(boost::any_cast<string>(compare_one(string("1"), 1)) == "");
    return 0;
}