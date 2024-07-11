#include <boost/any.hpp>
#include <string>

int main() {
    std::string str;
    int val;

    std::cout << "Enter a string: ";
    std::cin >> str;

    try {
        boost::any a = str;
        int result = boost::any_cast<int>(a);
        std::cout << "The integer value is: " << result << std::endl;
    } catch (boost::bad_any_cast& e) {
        std::cout << "Invalid input. Please enter an integer." << std::endl;
    }

    return 0;
}