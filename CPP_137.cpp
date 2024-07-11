```cpp
boost::any compare_one(boost::any a, boost::any b) {
    if (boost::holds_alternative<int>(a) && boost::holds_alternative<double>(b)) {
        return boost::get<int>(a) > boost::get<double>(b) ? a : b;
    }
    else if (boost::holds_alternative<double>(a) && boost::holds_alternative<int>(b)) {
        return boost::get<double>(a) > boost::get<int>(b) ? a : b;
    }
    else if (boost::holds_alternative<std::string>(a) && boost::holds_alternative<double>(b)) {
        std::string str = boost::get<std::string>(a);
        double num = boost::get<double>(b);
        return str > std::to_string(num) ? a : b;
    }
    else if (boost::holds_alternative<double>(a) && boost::holds_alternative<std::string>(b)) {
        std::string str = boost::get<std::string>(b);
        double num = boost::get<double>(a);
        return std::to_string(num) > str ? a : b;
    }
    else if (boost::holds_alternative<std::string>(a) && boost::holds_alternative<std::string>(b)) {
        std::string str1 = boost::get<std::string>(a);
        std::string str2 = boost::get<std::string>(b);
        return str1 > str2 ? a : b;
    }
    else if (boost::holds_alternative<int>(a) && boost::holds_alternative<std::string>(b)) {
        int num = boost::get<int>(a);
        std::string str = boost::get<std::string>(b);
        return std::to_string(num) > str ? a : b;
    }
    else if (boost::holds_alternative<std::string>(a) && boost::holds_alternative<int>(b)) {
        int num = boost::get<int>(b);
        std::string str = boost::get<std::string>(a);
        return str > std::to_string(num) ? a : b;
    }
    else if (boost::holds_alternative<double>(a) && boost::holds_alternative<double>(b)) {
        double num1 = boost::get<double>(a);
        double num2 = boost::get<double>(b);
        return num1 > num2 ? a : b;
    }
    else {
        return boost::any();
    }
}