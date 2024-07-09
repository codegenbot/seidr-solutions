#include <boost/any.hpp>
#include <string>

int main() {
    boost::any a = "hello";
    boost::any b = 123;

    boost::any result = compare_one(a, b);

    std::cout << boost::any_cast<std::string>(result) << std::endl;

    return 0;
}

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return "Invalid";
    }
    else if (a.type() == typeid(float) && b.type() == typeid(std::string)) {
        return "Invalid";
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string strA = boost::any_cast<std::string>(a);
        std::string strB = boost::any_cast<std::string>(b);
        if (strA > strB)
            return a;
        else if (strA < strB)
            return b;
        else
            return "Equal";
    }
    else {
        return a;
    }
}