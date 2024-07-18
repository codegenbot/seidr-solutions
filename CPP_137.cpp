#include <boost/any.hpp>
#include <cassert>

if(a.type() == b.type()){
    if(a.type() == typeid(int)){
        return boost::any_cast<int>(a) > boost::any_cast<int>(b) ? a : b;
    } else if(a.type() == typeid(float)){
        return boost::any_cast<float>(a) > boost::any_cast<float>(b) ? a : b;
    } else {
        string str_a = boost::any_cast<string>(a);
        string str_b = boost::any_cast<string>(b);
        float num_a = stof(str_a.replace(str_a.find(","), 1, "."));
        float num_b = stof(str_b.replace(str_b.find(","), 1, "."));
        return num_a > num_b ? a : (num_a < num_b ? b : "None");
    }
} else {
    return "None";
}