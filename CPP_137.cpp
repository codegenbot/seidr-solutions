#include <boost/any.hpp>
#include <string>
using namespace std;

// Declare the function
boost::any compare_one(boost::any a, boost::any b);

int main() {
    assert(compare_one(5, 10) == 10);
    assert(compare_one(3.14f, 2.71f) == 3.14f);
    assert(compare_one("abc.123", "def,456") == "def,456");

    return 0;
}

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int int_a = boost::any_cast<int>(a);
        int int_b = boost::any_cast<int>(b);
        if (int_a > int_b) {
            return int_a;
        } else if (int_b > int_a) {
            return int_b;
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float float_a = boost::any_cast<float>(a);
        float float_b = boost::any_cast<float>(b);
        if (float_a > float_b) {
            return float_a;
        } else if (float_b > float_a) {
            return float_b;
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str_a = boost::any_cast<string>(a);
        string str_b = boost::any_cast<string>(b);
        if (str_a.find_first_of(".,") != string::npos) {
            str_a.erase(std::remove(str_a.begin(), str_a.end(), ','), str_a.end());
            str_a.replace(str_a.find('.'), 1, ",");
        }
        if (str_b.find_first_of(".,") != string::npos) {
            str_b.erase(std::remove(str_b.begin(), str_b.end(), ','), str_b.end());
            str_b.replace(str_b.find('.'), 1, ",");
        }
        if (stof(str_a) > stof(str_b)) {
            return str_a;
        } else if (stof(str_b) > stof(str_a)) {
            return str_b;
        }
    }
    return "None";
}