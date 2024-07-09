#include <boost/any.hpp>
#include <string>

int main() {
    boost::any a = "hello";
    boost::any b = "hi";

    boost::any result = compare_one(a, b);

    std::cout << boost::any_cast<std::string>(result) << std::endl;

    return 0;
}

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int intA = boost::any_cast<int>(a);
        float floatB = boost::any_cast<float>(b);
        return boost::any(std::to_string((int)floatB));
    }
    else if (a.type() == typeid(float) && b.type() == typeid(std::string)) {
        if (((float)a).cast_to<int>() > std::stoi(boost::any_cast<std::string>(b))))
            return a;
        else
            return b;
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
        return typeid(int);
    }
}