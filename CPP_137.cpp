#include <boost/lexical_cast.hpp>
#include <string>
#include <stdexcept>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int)) {
        int ia = boost::any_cast<int>(a);
        if (b.type() == typeid(float))
            return boost::any(b);
        else if (b.type() == typeid(std::string))
            return boost::any(b);
        else if (b.type() == typeid(int)) {
            int ib = boost::any_cast<int>(b);
            if (ia > ib)
                return a;
            else if (ia < ib)
                return b;
            else
                return boost::any("None");
        }
    } 
    else if (a.type() == typeid(float)) {
        float ia = boost::any_cast<float>(a);
        if (b.type() == typeid(int))
            return b;
        else if (b.type() == typeid(std::string)) {
            std::string str = boost::lexical_cast<std::string>(b);
            if (ia > stod(str))
                return a;
            else if (ia < stod(str))
                return b;
            else
                return boost::any("None");
        } 
        else if (b.type() == typeid(float)) {
            float ib = boost::any_cast<float>(b);
            if (ia > ib)
                return a;
            else if (ia < ib)
                return b;
            else
                return boost::any("None");
        }
    } 
    else if (a.type() == typeid(std::string)) {
        std::string str1 = boost::lexical_cast<std::string>(a);
        if (b.type() == typeid(int)) {
            int ib = boost::any_cast<int>(b);
            if (stod(str1) > ib)
                return a;
            else if (stod(str1) < ib)
                return b;
            else
                return boost::any("None");
        } 
        else if (b.type() == typeid(float)) {
            float ib = boost::any_cast<float>(b);
            if (stod(str1) > ib)
                return a;
            else if (stod(str1) < ib)
                return b;
            else
                return boost::any("None");
        } 
        else if (b.type() == typeid(std::string)) {
            std::string str2 = boost::lexical_cast<std::string>(b);
            if (str1 > str2)
                return a;
            else if (str1 < str2)
                return b;
            else
                return boost::any("None");
        }
    } 

    throw std::runtime_error("Invalid input types");
}