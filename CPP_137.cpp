#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int ai = boost::any_cast<int>(a);
        float bf = boost::any_cast<float>(b);
        return (ai > bf) ? a : ((bf > ai) ? b : boost::any(std::to_string(ai)));
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int ai = boost::any_cast<int>(a);
        std::string bs = boost::any_cast<std::string>(b);
        return (ai > stod(bs)) ? a : ((stod(bs) > ai) ? b : boost::any(std::to_string(ai)));
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float af = boost::any_cast<float>(a);
        int bi = boost::any_cast<int>(b);
        return (af > bi) ? a : ((bi > af) ? b : boost::any(std::to_string(af)));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        std::string as = boost::any_cast<std::string>(a);
        float bf = boost::any_cast<float>(b);
        return (stod(as) > bf) ? a : ((bf > stod(as)) ? b : boost::any(std::to_string(stof(as))));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        std::string as = boost::any_cast<std::string>(a);
        int bi = boost::any_cast<int>(b);
        return (stod(as) > bi) ? a : ((bi > stof(as)) ? b : boost::any(std::to_string(stof(as))));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        std::string as = boost::any_cast<std::string>(a);
        std::string bs = boost::any_cast<std::string>(b);
        return (stod(as) > stod(bs)) ? a : ((stod(bs) > stof(as)) ? b : boost::any(std::to_string(stof(as))));
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int ai = boost::any_cast<int>(a);
        int bi = boost::any_cast<int>(b);
        return (ai > bi) ? a : ((bi > ai) ? b : boost::any(std::to_string(ai)));
    }
    else {
        return boost::any("None");
    }
}