#include <boost/any.hpp>
#include <string>

int main() {
    boost::any a = "apple";
    boost::any b = "banana";

    boost::any result = compare_one(a, b);

    if (result.type() == typeid(std::string)) {
        std::cout << boost::any_cast<std::string>(result) << std::endl;
    }
}

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(std::string)) {
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
            return boost::any("None");
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int iA = boost::any_cast<int>(a);
        int iB = boost::any_cast<int>(b);
        if (iA > iB)
            return a;
        else if (iA < iB)
            return b;
        else
            return boost::any("None");
    }
    else {
        return boost::any("None");
    }
}