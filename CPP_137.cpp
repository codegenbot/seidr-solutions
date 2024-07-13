```cpp
#include<boost/any_cast.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (!boost::any_cast<int>(&a) && !boost::any_cast<float>(&a)) {
        string s = boost::any_cast<string>(a);
        int decPos = s.find('.');
        if (decPos == -1)
            decPos = s.find(',');
        if (decPos != -1) {
            s.erase(decPos);
            a = boost::any(s);
        }
    }

    if (!boost::any_cast<int>(&b) && !boost::any_cast<float>(&b)) {
        string s = boost::any_cast<string>(b);
        int decPos = s.find('.');
        if (decPos == -1)
            decPos = s.find(',');
        if (decPos != -1) {
            s.erase(decPos);
            b = boost::any(s);
        }
    }

    if (boost::any_cast<int>(&a) > boost::any_cast<int>(&b))
        return a;
    else if (boost::any_cast<float>(&a) > boost::any_cast<float>(&b))
        return a;
    else if (boost::any_cast<int>(&b) > boost::any_cast<int>(&a))
        return b;
    else if (boost::any_cast<float>(&b) > boost::any_cast<float>(&a))
        return b;

    return "None";
}