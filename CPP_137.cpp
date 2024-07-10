#include <boost/any.hpp>
#include <string>
#include <stdexcept>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a > (float)b ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a > (int)b ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = any_cast<string>(a);
        string str2 = any_cast<string>(b);

        int dot_pos1 = str1.find('.');
        int comma_pos1 = str1.find(',');
        int dot_pos2 = str2.find('.');
        int comma_pos2 = str2.find(',');

        if (dot_pos1 == -1 && comma_pos1 == -1) {
            return (stof(str1) > stof(str2)) ? a : b;
        }
        else if (dot_pos1 != -1 && dot_pos2 != -1) {
            return (stod(str1) > stod(str2)) ? a : b;
        }
        else if ((dot_pos1 == -1 && comma_pos1 == -1) || (dot_pos2 == -1 && comma_pos2 == -1)) {
            throw runtime_error("Invalid input");
        }
        else if (stof(str1) > stof(str2)) {
            return a;
        }
        else {
            return b;
        }
    }
    else if ((a.type() == typeid(string) && b.type() != typeid(string)) || (b.type() == typeid(string) && a.type() != typeid(string))) {
        throw runtime_error("Invalid input");
    }
    else {
        return boost::any("None");
    }
}