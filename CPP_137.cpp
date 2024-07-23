#include <iostream>
#include <boost/lexical_cast.hpp>

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::cin >> str;

    int num = boost::lexical_cast<int>(str);

    std::cout << "The integer value is: " << num << std::endl;

    return 0;
}