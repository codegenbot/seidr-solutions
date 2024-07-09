#include <boost/any.hpp>
#include <string>
#include <cassert>
#include <iostream>

using namespace std;

template<typename T, typename U>
boost::any compare(boost::any a, boost::any b) {
    assert(a.type() == typeid(T) && b.type() == typeid(U));
    
    if(boost::any_cast<T>(a) > boost::any_cast<U>(b))
        return a;
    else if(boost::any_cast<T>(a) < boost::any_cast<U>(b))
        return b;
    else
        return boost::any("None");
}

int main() {
    boost::any a = 5;
    boost::any b = 10;
    
    cout << boost::any_cast<int>(compare<int, int>(a, b)) << endl;
    
    a = 3.14f;
    b = 6.28f;
    
    cout << boost::any_cast<float>(compare<float, float>(a, b)) << endl;
    
    a = string("hello");
    b = string("world");
    
    cout << boost::any_cast<string>(compare<string, string>(a, b)) << endl;
    
    return 0;
}