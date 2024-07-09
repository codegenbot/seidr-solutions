#include <boost/any.hpp>
#include <string>

using namespace std;
using namespace boost;

boost::any compare_one(const boost::any& a, const boost::any& b) {
    if(a.type() == typeid(int) && b.type() == typeid(int)){
        if(boost::any_cast<int>(a) > boost::any_cast<int>(b)){
            return a;
        } else if(boost::any_cast<int>(a) < boost::any_cast<int>(b)){
            return b;
        }
    } else if(a.type() == typeid(float) && b.type() == typeid(float)){
        if(boost::any_cast<float>(a) > boost::any_cast<float>(b)){
            return a;
        } else if(boost::any_cast<float>(a) < boost::any_cast<float>(b)){
            return b;
        }
    } else if(a.type() == typeid(string) && b.type() == typeid(string)){
        float fa = stof(boost::any_cast<string>(any_cast<string>(a).replace(any_cast<string>(a).find(','), 1, ".")));
        float fb = stof(boost::any_cast<string>(any_cast<string>(b).replace(any_cast<string>(b).find(','), 1, ".")));
        if(fa > fb){
            return a;
        } else if(fa < fb){
            return b;
        }
    }
    return boost::any();
}