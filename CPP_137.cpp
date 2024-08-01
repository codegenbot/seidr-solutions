#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int ai = boost::any_cast<int>(a);
        float bf = boost::any_cast<float>(b);
        return (ai > bf) ? a : ((bf > ai) ? b : boost::any(std::string("None")));
    }
    else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        int ai = boost::any_cast<int>(a);
        std::string bs = boost::any_cast<std::string>(b);
        return (ai > stof(bs)) ? a : ((stof(bs) > ai) ? b : boost::any(std::string("None")));
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float af = boost::any_cast<float>(a);
        int bi = boost::any_cast<int>(b);
        return (af > bi) ? a : ((bi > af) ? b : boost::any(std::string("None")));
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        std::string as = boost::any_cast<std::string>(a);
        float bf = boost::any_cast<float>(b);
        return (stof(as) > bf) ? a : ((bf > stof(as)) ? b : boost::any(std::string("None")));
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        std::string as = boost::any_cast<std::string>(a);
        int bi = boost::any_cast<int>(b);
        return (stof(as) > bi) ? a : ((bi > stof(as)) ? b : boost::any(std::string("None")));
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string as = boost::any_cast<std::string>(a);
        std::string bs = boost::any_cast<std::string>(b);
        return (stof(as) > stof(bs)) ? a : ((stof(bs) > stof(as)) ? b : boost::any(std::string("None")));
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int ai = boost::any_cast<int>(a);
        int bi = boost::any_cast<int>(b);
        return (ai > bi) ? a : ((bi > ai) ? b : boost::any(std::string("None")));
    }
    else {
        return boost::any(std::string("None"));
    }
}