#include <iostream>
#include <boost/any.hpp>
#include <string>

template <typename T>
T compare_one(const boost::any& a, const boost::any& b){
    if(boost::any_cast<T>(a) > boost::any_cast<T>(b)) return boost::any_cast<T>(a);
    if(boost::any_cast<T>(a) < boost::any_cast<T>(b)) return boost::any_cast<T>(b);
    return boost::any_cast<T>(a);
}

int main(){
    boost::any a = 5;
    boost::any b = 10;
    
    if(a.type() == typeid(int) && b.type() == typeid(int)){
        return compare_one<int>(a, b);
    }
    if(a.type() == typeid(float) && b.type() == typeid(float)){
        return compare_one<float>(a, b);
    }
    if(a.type() == typeid(std::string) && b.type() == typeid(std::string)){
        return compare_one<std::string>(a, b);
    }
    
    return "None";
}