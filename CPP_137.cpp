#include <string>
#include <algorithm>
#include <boost/any.hpp>

using namespace std;
using boost::any;

any compare_one(any a, any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int num_a = boost::any_cast<int>(a);
        int num_b = boost::any_cast<int>(b);
        if (num_a == num_b)
            return any("None");
        else
            return any(max(num_a, num_b));
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float num_a = boost::any_cast<float>(a);
        float num_b = boost::any_cast<float>(b);
        if (num_a == num_b)
            return any("None");
        else
            return any(max(num_a, num_b));
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str_a = boost::any_cast<string>(a);
        string str_b = boost::any_cast<string>(b);
        if (str_a == str_b)
            return any("None");
        else
            return any(max(str_a, str_b));
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int num_a = boost::any_cast<int>(a);
        string str_b = boost::any_cast<string>(b);
        return any(max(to_string(num_a), str_b));
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str_a = boost::any_cast<string>(a);
        int num_b = boost::any_cast<int>(b);
        return any(max(str_a, to_string(num_b)));
    }
    return any();
}