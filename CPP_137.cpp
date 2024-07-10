#include <string>
#include <any>

std::any compare_one(std::any a, std::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string str1 = a.convert<std::string>();
        std::string str2 = b.convert<std::string>();

        if (str1 == "None" || str2 == "None")
            return a;

        double num1 = std::stod(str1);
        double num2 = std::stod(str2);

        if (num1 > num2)
            return a;
        else if (num1 < num2)
            return b;
        else
            return "None";
    }
    else {
        double num1 = a.convert<double>();
        double num2 = b.convert<double>();

        if (num1 > num2)
            return a;
        else if (num1 < num2)
            return b;
        else
            return "None";
    }
}