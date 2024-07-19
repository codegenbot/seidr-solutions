#include <boost/any.hpp>
#include <algorithm>
#include <string>
#include <cassert>

void replace(std::string::iterator begin, std::string::iterator end, char target, char replacement);

boost::any compare_one(const boost::any &a, const boost::any &b);

void replace(std::string::iterator begin, std::string::iterator end, char target, char replacement) {
    std::replace(begin, end, target, replacement);
}

boost::any compare_one(const boost::any &a, const boost::any &b) {
    if(a.type() == typeid(int) && b.type() == typeid(int)){
        if(boost::any_cast<int>(a) > boost::any_cast<int>(b)){
            return a;
        } else if(boost::any_cast<int>(a) < boost::any_cast<int>(b)){
            return b;
        } else {
            return "None";
        }
    } else if(a.type() == typeid(float) && b.type() == typeid(float)){
        if(boost::any_cast<float>(a) > boost::any_cast<float>(b)){
            return a;
        } else if(boost::any_cast<float>(a) < boost::any_cast<float>(b)){
            return b;
        } else {
            return "None";
        }
    } else if(a.type() == typeid(std::string) && b.type() == typeid(std::string)){
        std::string strA = boost::any_cast<std::string>(a);
        std::string strB = boost::any_cast<std::string>(b);
        if(strA.find_first_of(".,") != std::string::npos) {
            replace(strA.begin(), strA.end(), ',', '.');
        }
        if(strB.find_first_of(".,") != std::string::npos) {
            replace(strB.begin(), strB.end(), ',', '.');
        }
        if(std::stof(strA) > std::stof(strB)){
            return a;
        } else if(std::stof(strA) < std::stof(strB)){
            return b;
        } else {
            return "None";
        }
    } else {
        return "None";
    }
}

using namespace std;
using namespace boost;

assert(boost::any_cast<std::string>(compare_one(std::string("1"), 1)) == "None");