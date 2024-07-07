#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convert_to<int>(), (float)b.convert_to<float>());
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return (b.convert_to<string>() > to_string(a.convert_to<int())) ? b : "None";
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        istringstream iss(b.convert_to<string>());
        float b_float;
        iss >> b_float;
        return (a.convert_to<float>() > b_float) ? a : "None";
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        return (b.convert_to<int>() > stoi(a.convert_to<string()))) ? b : "None";
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        istringstream iss(b.convert_to<float>());
        string b_str;
        iss >> b_str;
        return (a.convert_to<string>() > b_str) ? a : "None";
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (a.convert_to<int>() > b.convert_to<int>()) ? boost::any(a) : "None";
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return (a.convert_to<float>() > b.convert_to<float>()) ? a : "None";
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return (a.convert_to<string>() > b.convert_to<string>()) ? a : "None";
    }
    return "None";
}