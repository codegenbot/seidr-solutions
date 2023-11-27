#include <string>
#include <boost/any.hpp>
#include <boost/algorithm/string.hpp>
#include <cassert>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int num1 = boost::any_cast<int>(a);
        int num2 = boost::any_cast<int>(b);
        return max(num1, num2);
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float num1 = boost::any_cast<float>(a);
        float num2 = boost::any_cast<float>(b);
        return max(num1, num2);
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        boost::algorithm::to_lower(str1);
        boost::algorithm::to_lower(str2);
        return max(str1, str2, [](const string& s1, const string& s2) { return s1 < s2; });
    }
    return boost::any();
}

int main() {
    assert (boost::any_cast<string>(compare_one(string("1"), string("None"))) == "None");
    return 0;
}