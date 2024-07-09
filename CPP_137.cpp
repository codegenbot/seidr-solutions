#include <boost/any.hpp>
#include <string>

int main() {
    std::string a;
    int choice;
    std::cout << "Enter your first value: ";
    std::cin >> a;

    std::cout << "Enter 1 for integer, 2 for float, 3 for string: ";
    std::cin >> choice;

    boost::any x = boost::any(choice);

    if (choice == 1) {
        std::string b;
        std::cout << "Enter your second value: ";
        std::cin >> b;
        boost::any y = boost::any(b);
        x = compare_one(x, y);
    }
    else if (choice == 2 || choice == 3) {
        float c;
        if (choice == 2) 
            std::cout << "Enter your second value: ";
        else
            std::cout << "Enter your string value: ";
        
        std::cin >> c;
        boost::any z = boost::any(c);
        x = compare_one(x, z);
    }

    std::cout << boost::any_cast<std::string>(x) << std::endl;

    return 0;
}

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any("int is less than float");
    }
    else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        if (boost::any_cast<int>(a) < 0)
            return boost::any("Negative integer is less than string");
        else
            return boost::any("Positive integer is greater than or equal to string");
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        if(x < y)
            return boost::any("Integer 1 is less than Integer 2");
        else if(x > y)
            return boost::any("Integer 1 is greater than Integer 2");
        else
            return boost::any("Integers are equal");
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float x = boost::any_cast<float>(a);
        float y = boost::any_cast<float>(b);
        if(x < y)
            return boost::any("Float 1 is less than Float 2");
        else if(x > y)
            return boost::any("Float 1 is greater than Float 2");
        else
            return boost::any("Floats are equal");
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string strA = boost::any_cast<std::string>(a);
        std::string strB = boost::any_cast<std::string>(b);
        if (strA > strB)
            return boost::any("String 1 is greater than String 2");
        else if (strA < strB)
            return boost::any("String 1 is less than String 2");
        else
            return boost::any("Strings are equal");
    }
    else {
        return boost::any("Invalid input");
    }
}