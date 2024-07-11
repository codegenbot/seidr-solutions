#include <iostream>
#include <boost/any.hpp>

int main() {
    int i = 10;
    double d = 3.14;
    std::string s = "Hello, World!";
    
    boost::any a1(i);
    boost::any a2(d);
    boost::any a3(s);

    std::cout << "Before conversion:" << std::endl;
    std::cout << "a1: " << a1.type() << std::endl;
    std::cout << "a2: " << a2.type() << std::endl;
    std::cout << "a3: " << a3.type() << std::endl;

    int iRetrieved = boost::any_cast<int>(a1);
    double dRetrieved = boost::any_cast<double>(a2);
    std::string sRetrieved = boost::any_cast<std::string>(a3);

    std::cout << "After conversion:" << std::endl;
    std::cout << "iRetrieved: " << iRetrieved << std::endl;
    std::cout << "dRetrieved: " << dRetrieved << std::endl;
    std::cout << "sRetrieved: " << sRetrieved << std::endl;

    return 0;
}