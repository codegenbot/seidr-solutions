#include <boost/any.hpp>
#include <string>
#include <iostream>

int compare_one(const boost::any& s, int i) {
    if (i == 1)
        return std::stoi(s.convert_to<std::string>()) - 10;
    else if (i == 2)
        return std::stoi(s.convert_to<std::string>());
    else if (i == 3)
        return std::stoi(s.convert_to<std::string>()) + 10;
    else 
        return 0;
}

int main() {
    boost::any a, b;
    std::cout << "Enter the first number: ";
    std::cin >> a;
    std::cout << "Enter the second number: ";
    std::cin >> b;

    if (a.type() != boost::any::type_id<std::string>() || b.type() != boost::any::type_id<std::string>()) {
        return 0;
    }

    int s1 = compare_one(a, 1);
    int s2 = compare_one(b, 2);

    return (s1 < s2) ? -1 : ((s2 < s1) ? 1 : 0); 
}