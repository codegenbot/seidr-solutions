#include <iostream>
#include <string>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int)) {
        int ia = any_cast<int>(a);
        if (b.type() == typeid(int)) {
            int ib = any_cast<int>(b);
            return (ia < ib)? b: (ia > ib)? a: boost::any("None");
        }
        else if (b.type() == typeid(float)) {
            float fb = any_cast<float>(b);
            return (ia < fb)? b: (ia > fb)? a: boost::any("None");
        }
        else if (b.type() == typeid(string)) {
            string sb = any_cast<string>(b);
            return (stoi(sb) >= ia)? boost::any("None"): ((stoi(sb) < ia)? b: a);
        }
    }
    else if (a.type() == typeid(float)) {
        float fa = any_cast<float>(a);
        if (b.type() == typeid(int)) {
            int ib = any_cast<int>(b);
            return (fa < ib)? b: (fa > ib)? a: boost::any("None");
        }
        else if (b.type() == typeid(float)) {
            float fb = any_cast<float>(b);
            return (fa < fb)? b: (fa > fb)? a: boost::any("None");
        }
        else if (b.type() == typeid(string)) {
            string sb = any_cast<string>(b);
            return (stof(sb) >= fa)? boost::any("None"): ((stof(sb) < fa)? b: a);
        }
    }
    else if (a.type() == typeid(string)) {
        string sa = any_cast<string>(a);
        if (b.type() == typeid(int)) {
            int ib = any_cast<int>(b);
            return (stoi(sa) >= ib)? boost::any("None"): ((stoi(sa) < ib)? b: a);
        }
        else if (b.type() == typeid(float)) {
            float fb = any_cast<float>(b);
            return (stof(sa) >= fb)? boost::any("None"): ((stof(sa) < fb)? b: a);
        }
        else if (b.type() == typeid(string)) {
            string sb = any_cast<string>(b);
            return (sa <= sb)? sa: sb;
        }
    }
    return boost::any();
}