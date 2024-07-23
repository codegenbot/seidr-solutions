#include <iostream>
#include <boost/lexical_cast.hpp>

int main() {
    std::string str;
    std::cout << "Enter a number: ";
    std::cin >> str;
    
    try {
        int num = boost::lexical_cast<int>(str);
        std::cout << "You entered the number " << num << ".\n";
    } catch(boost::bad_lexical_cast &) {
        std::cout << "That's not a valid number!\n";
    }
    
    return 0;
}