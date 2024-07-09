#include <boost/any.hpp>
#include <string>
#include <iostream>

int main() {
    std::string a;
    int i;
    std::cout << "Enter an integer or string: ";
    std::cin >> a;

    try {
        i = stoi(a);
    }
    catch (std::invalid_argument) {
        boost::any b = a;
        boost::any c = "hi";

        boost::any result = compare_one(b, c);

        std::cout << boost::any_cast<std::string>(result) << std::endl;

        return 0;
    }

    int j = i;
    boost::any d = i;
    boost::any e = j;

    boost::any result2 = compare_two(d, e);

    std::cout << boost::any_cast<int>(result2) << std::endl;

    return 0;
}

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return "Not comparable";
    }
    else if (a.type() == typeid(float) && b.type() == typeid(std::string)) {
        return "Not comparable";
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
        return "Not comparable";
    }
}

boost::any compare_two(boost::any a, boost::any b) {
    int i = boost::any_cast<int>(a);
    int j = boost::any_cast<int>(b);

    if (i > j)
        return a;
    else if (i < j)
        return b;
    else
        return "Equal";
}