```cpp
#include <boost/any.hpp>
#include <string>

int main() {
    std::string input;
    std::cout << "Enter a value (or 'stop' to finish): ";
    while (true) {
        std::cin >> input;
        if (input == "stop")
            break;

        boost::any a(input);
        try {
            std::string strValue = boost::any_cast<std::string>(a);
            std::cout << "You entered: " << strValue << std::endl;
        } catch(boost::bad_any_cast const & e) {
            std::cout << "Error: Invalid type" << std::endl;
        }
    }
    return 0;
}