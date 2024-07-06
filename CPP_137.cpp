#include "/usr/include/boost/any.hpp"

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)boost::any_cast<int>(a) > boost::any_cast<double>(b)
            ? a
            : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return boost::any_cast<double>(a) > boost::any_cast<int>(b)
            ? a
            : b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string str_a = boost::any_cast<std::string>(a);
        std::string str_b = boost::any_cast<std::string>(b);

        if (str_a == "None" || str_b == "None") {
            return "None";
        }

        double num_a = std::stod(str_a);
        double num_b = std::stod(str_b);

        return num_a > num_b ? a : b;
    } else if (a.type() == typeid(std::string) && b.type() != typeid(std::string)) {
        std::string str_a = boost::any_cast<std::string>(a);
        double num_b = boost::any_cast<double>(b);

        if (str_a == "None") {
            return "None";
        }

        double num_a = std::stod(str_a);

        return num_a > num_b ? a : b;
    } else if (a.type() != typeid(std::string) && b.type() == typeid(std::string)) {
        double num_a = boost::any_cast<double>(a);
        std::string str_b = boost::any_cast<std::string>(b);

        if (str_b == "None") {
            return "None";
        }

        double num_b = std::stod(str_b);

        return num_a > num_b ? a : b;
    } else {
        throw std::invalid_argument("Invalid type");
    }
}