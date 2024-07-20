#include <boost/any.hpp>
#include <string>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string strA = boost::any_cast<std::string>(a);
        std::string strB = boost::any_cast<std::string>(b);
        int valA = std::stoi(strA);
        int valB = std::stoi(strB);
        if (valA > valB)
            return a;
        else if (valA < valB)
            return b;
        else
            return boost::any("None");
    }
    else {
        double valA, valB;
        if (boost::any_cast<int>(a) > 0) {
            valA = boost::any_cast<int>(a);
        } 
        else if (boost::any_cast<double>(a) > 0.0) {
            valA = boost::any_cast<double>(a);
        }
        else {
            valA = boost::any_cast<std::string>(a).find(',') != std::string::npos ? std::stod(boost::any_cast<std::string>(a)) : 0.0;
        }

        if (boost::any_cast<int>(b) > 0) {
            valB = boost::any_cast<int>(b);
        }
        else if (boost::any_cast<double>(b) > 0.0) {
            valB = boost::any_cast<double>(b);
        }
        else {
            valB = boost::any_cast<std::string>(b).find(',') != std::string::npos ? std::stod(boost::any_cast<std::string>(b)) : 0.0;
        }

        if (valA > valB)
            return a;
        else if (valA < valB)
            return b;
        else
            return boost::any("None");
    }
}