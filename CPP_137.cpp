#include <boost/any.hpp>
#include <string>
using namespace std;

// Function declaration
boost::any compare_one(const boost::any &a, const boost::any &b);

int main() {
    // Sample input - Modify based on the problem requirement
    boost::any a = 10;
    boost::any b = 20;

    // Assert statement
    assert(compare_one(a, b).type() == typeid(int));

    return 0;
}

// Function definition
boost::any compare_one(const boost::any &a, const boost::any &b) {
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
    
    return "None"; // Return appropriate value based on the comparison result
}