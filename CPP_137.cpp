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
    if (boost::any_cast<bool>(a) && boost::any_cast<float>(b)) {
        return boost::any(true);
    }
    else if (!boost::any_cast<bool>(a) && boost::any_cast<std::string>(b)) {
        return boost::any("Not True");
    }
    else if (boost::any_cast<std::string>(a) && boost::any_cast<std::string>(b)) {
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
        return boost::any(true);
    }
}