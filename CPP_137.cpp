```
#include <boost/lexical_cast.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    }
    if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return b;
    }
    if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (stof(a.convert_to<string>().erase(0, 1).erase(stoi(a.convert_to<string>()) == a.convert_to<string>() ? a.convert_to<string>().size() - 1 : a.convert_to<string>().find(','))) >= stof(b.convert_to<string>().erase(0, 1).erase(stoi(b.convert_to<string>()) == b.convert_to<string>() ? b.convert_to<string>().size() - 1 : b.convert_to<string>().find(',')))
            return b;
        else if (stof(a.convert_to<string>().erase(0, 1).erase(stoi(a.convert_to<string>()) == a.convert_to<string>() ? a.convert_to<string>().size() - 1 : a.convert_to<string>().find(','))) <= stof(b.convert_to<string>().erase(0, 1).erase(stoi(b.convert_to<string>()) == b.convert_to<string>() ? b.convert_to<string>().size() - 1 : b.convert_to<string>().find(','))
            return a;
        else
            return boost::any("None");
    }
    if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string str = b.convert_to<string>();
        if (stof(str.erase(0, 1).erase(stoi(str) == str ? str.size() - 1 : str.find(','))) >= a.cast<int>())
            return boost::any(b);
        else
            return a;
    }
    if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str = a.convert_to<string>();
        if (stof(str.erase(0, 1).erase(stoi(str) == str ? str.size() - 1 : str.find(','))) <= b.cast<int>())
            return boost::any(a);
        else
            return boost::any(b);
    }
    if ((a.type() == typeid(int) && b.type() == typeid(int)) || (a.type() == typeid(float) && b.type() == typeid(float)))
        return a < b ? b : a;
    return a;
}