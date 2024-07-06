#include <iostream>
#include <string>
#include <boost/any.hpp>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    // Convert both values to strings.
    std::string s1 = boost::any_cast<std::string>(a);
    std::string s2 = boost::any_cast<std::string>(b);

    double d1, d2;

    // Try to convert strings to floats and compare them
    if (std::istringstream(s1) >> d1 && std::istringstream(s2) >> d2) {
        if (d1 > d2)
            return a;
        else if (d2 > d1)
            return b;
        else
            return boost::any("None");
    }

    // If the values are strings, compare them.
    if (s1 > s2)
        return a;
    else if (s2 > s1)
        return b;
    else
        return boost::any("None");

    // If we reach here, at least one of the inputs was not convertible to float or string.
    return boost::any();
}

int main() {
    boost::any result = compare_one(boost::any(1), boost::any(2.5));
    std::cout << "Result: " << result.type()->name() << " - " << boost::any_cast<std::string>(result) << std::endl;

    return 0;
}