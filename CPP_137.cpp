```
#include <boost/lexical_cast.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return boost::any(b);
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float fa = boost::any_cast<float>(a);
        float fb = boost::any_cast<float>(b);
        return fa > fb ? a : b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string sa = boost::any_cast<std::string>(a);
        std::string sb = boost::any_cast<std::string>(b);
        return sa > sb ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int ai = boost::any_cast<int>(a);
        float bf = boost::any_cast<float>(b);
        return ai > bf ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float fa = boost::any_cast<float>(a);
        int bi = boost::any_cast<int>(b);
        return fa > bi ? a : b;
    } else {
        std::string result = "None";
        boost::any_cast<std::string>(a) == boost::any_cast<std::string>(b)
            ? std::cout << result << std::endl
            : (boost::any_cast<std::string>(a) > boost::any_cast<std::string>(b))
                ? a : b;
    }
    return a;
}