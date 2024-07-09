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
        return a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int iA = boost::any_cast<int>(a);
        int iB = boost::any_cast<int>(b);
        if (iA > iB)
            return a;
        else if (iA < iB)
            return b;
        else
            return "Equal";
    }
    else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        return a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        int iB = boost::any_cast<int>(b);
        if ((boost::any_cast<float>(a)) > iB)
            return a;
        else
            return "Equal";
    }
    else if (a.type() == typeid(float) && b.type() == typeid(std::string)) {
        return "Equal";
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float fA = boost::any_cast<float>(a);
        float fB = boost::any_cast<float>(b);
        if (fA > fB)
            return a;
        else if (fA < fB)
            return b;
        else
            return "Equal";
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        return "None";
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        return "None";
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
        return "None";
    }
}