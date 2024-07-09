#include <boost/any.hpp>
#include <string>

int main() {
    std::string a = "hello";
    std::string b = "hi";

    boost::any result = compare_one(a, b);

    std::cout << boost::any_cast<std::string>(result) << std::endl;

    return 0;
}

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any(1.5);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(std::string)) {
        return boost::any("equal");
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string strA = boost::any_cast<std::string>(a);
        std::string strB = boost::any_cast<std::string>(b);
        if (strA > strB)
            return a;
        else if (strA < strB)
            return b;
        else
            return boost::any("Equal");
    }
    else {
        return boost::any(1.0);
    }
}