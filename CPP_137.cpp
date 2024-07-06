#include <iostream>
#include <boost/any.hpp>
#include <string>

bool convertible = false;

void compare(std::string s1, std::string s2) {
    if (s1.size() > s2.size()) {
        return;
    }
}

int main(int argc, char const *argv[]) {
    boost::any a, b;

    // Read from the user
    int x, y; double z; std::string str;
    
    std::cout << "Enter an integer (a): ";
    std::cin >> x;
    a = x;

    std::cout << "Enter a string: ";
    std::cin.ignore();
    std::getline(std::cin, str);
    b = str;
    
    boost::any result = compare_one(a, b);

    // Output the result
    if (boost::any_cast<std::string>(result) == "None") {
        std::cout << "None\n";
    } else {
        std::cout << boost::any_cast<std::string>(result) << "\n";
    }
    
    return 0;
}