#include <boost/any.hpp>
using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string strA = any_cast<std::string>(a);
        std::string strB = any_cast<std::string>(b);

        int i = strA.find('.');
        if (i != -1)
            strA.erase(i, 1);

        i = strB.find(',');
        if (i != -1)
            strB[i] = '.';

        return (std::stod(strA) > std::stod(strB)) ? a : b;
    }
    else if (a.type() == typeid(std::string) && (b.type() == typeid(int) || b.type() == typeid(double))) {
        std::string strA = any_cast<std::string>(a);
        int i = strA.find('.');
        if (i != -1)
            strA.erase(i, 1);

        double numB = any_cast<double>(b);
        return (std::stod(strA) > numB) ? a : b;
    }
    else {
        return boost::any();
    }
}