#include <boost/any.hpp>
#include <string>
#include <algorithm>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int val_a = boost::any_cast<int>(a);
        int val_b = boost::any_cast<int>(b);
        
        if (val_a > val_b)
            return val_a;
        else if (val_b > val_a)
            return val_b;
        else
            return boost::any();
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float val_a = boost::any_cast<float>(a);
        float val_b = boost::any_cast<float>(b);
        
        if (val_a > val_b)
            return val_a;
        else if (val_b > val_a)
            return val_b;
        else
            return boost::any();
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string val_a = boost::any_cast<std::string>(a);
        std::string val_b = boost::any_cast<std::string>(b);
        
        std::replace(val_a.begin(), val_a.end(), ',', '.');
        std::replace(val_b.begin(), val_b.end(), ',', '.');
        
        float num_a = std::stof(val_a);
        float num_b = std::stof(val_b);
        
        if (num_a > num_b)
            return val_a;
        else if (num_b > num_a)
            return val_b;
        else
            return boost::any();
    }
    else
        return boost::any();
}