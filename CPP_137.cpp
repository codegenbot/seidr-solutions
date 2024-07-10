#include <boost/any.hpp>
#include <string>
#include <iostream>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convert_to<int>(), (float)b.convert_to<float>());
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = (string)b.convert_to<string>();
        size_t pos = str.find(',');
        if (pos != string::npos)
            str.erase(pos, 1);
        return max((float)a.convert_to<float>(), stof(str));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        size_t pos_a = (string)a.convert_to<string>().find(',');
        size_t pos_b = (string)b.convert_to<string>().find(',');

        if (pos_a != string::npos)
            (string)a.convert_to<string>().erase(pos_a, 1);
        if (pos_b != string::npos)
            (string)b.convert_to<string>().erase(pos_b, 1);

        return max(stof((string)a.convert_to<string>()), stof((string)b.convert_to<string>()));
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        size_t pos = (string)b.convert_to<string>().find(',');
        if (pos != string::npos)
            (string)b.convert_to<string>().erase(pos, 1);
        return max((int)a.convert_to<int>(), stof((string)b.convert_to<string>()));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        size_t pos = (string)a.convert_to<string>().find(',');
        if (pos != string::npos)
            (string)a.convert_to<string>().erase(pos, 1);
        return max(stof((string)a.convert_to<string>()), (int)b.convert_to<int>());
    }
    else
        return "None";
}