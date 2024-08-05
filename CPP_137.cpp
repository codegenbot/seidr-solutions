#include <boost/any.hpp>
#include <boost/type_index.hpp>
#include <string>
using namespace std;
if(a.type() == boost::typeindex::type_id<int>() && b.type() == boost::typeindex::type_id<int>()){
    if(boost::any_cast<int>(a) > boost::any_cast<int>(b)){
        return a;
    } else if(boost::any_cast<int>(a) < boost::any_cast<int>(b)){
        return b;
    } else {
        return "None";
    }
} else if(a.type() == boost::typeindex::type_id<float>() && b.type() == boost::typeindex::type_id<float>()){
    if(boost::any_cast<float>(a) > boost::any_cast<float>(b)){
        return a;
    } else if(boost::any_cast<float>(a) < boost::any_cast<float>(b)){
        return b;
    } else {
        return "None";
    }
} else if(a.type() == boost::typeindex::type_id<string>() && b.type() == boost::typeindex::type_id<string>()){
    float a_float = stof(boost::any_cast<string>(a).replace(boost::any_cast<string>(a).find(','), 1, "."));
    float b_float = stof(boost::any_cast<string>(b).replace(boost::any_cast<string>(b).find(','), 1, ".");
    if(a_float > b_float){
        return a;
    } else if(a_float < b_float){
        return b;
    } else {
        return "None";
    }
} else {
    return "None";
}