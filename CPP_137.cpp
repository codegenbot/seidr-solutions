#include <boost/any.hpp>
#include <boost/any_cast.hpp>
#include <string>

bool compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        if (get<int>(a) > get<int>(b))
            return true;
        else if (get<int>(a) < get<int>(b))
            return false;
        else
            return false;
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        if (get<float>(a) > get<float>(b))
            return true;
        else if (get<float>(a) < get<float>(b))
            return false;
        else
            return false;
    } else if ((a.type() == typeid(string) && b.type() == typeid(int)) || 
               (a.type() == typeid(int) && b.type() == typeid(string))) {
        string strA = boost::any_cast<string>(a);
        int bInt = get<int>(b);
        return strA.compare(to_string(bInt)) > 0;
    } else if ((a.type() == typeid(string) && b.type() == typeid(float)) || 
               (a.type() == typeid(float) && b.type() == typeid(string))) {
        string strA = boost::any_cast<string>(a);
        float bFloat = get<float>(b);
        return strA.compare(to_string(bFloat)) > 0;
    } else {
        // Both are strings
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);
        return strA.compare(strB) > 0;
    }
}

boost::any myComp(boost::any a, boost::any b) {
    if (compare_one(a, b)) {
        return a;
    } else {
        return b;
    }
}