#include <boost/any.hpp>
#include <string>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    }
    if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return a;
    }
    if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = any_cast<string>(a);
        string strB = any_cast<string>(b);

        int i = 0, j = 0;

        while (i < strA.length()) {
            while (j < strB.length() && strA[i] != strB[j]) {
                j++;
            }
            if (j == strB.length()) {
                return a;
            }
            i++;
            j++;
        }

        return b;
    }
    if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int numA = any_cast<int>(a);
        string strB = any_cast<string>(b);

        int i = 0, j = 0;

        while (i < strB.length()) {
            while (j < strB.length() && strB[i] != std::to_string(numA)[j]) {
                j++;
            }
            if (j == std::to_string(numA).length()) {
                return a;
            }
            i++;
            j++;
        }

        return b;
    }
    if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int numB = any_cast<int>(b);
        string strA = any_cast<string>(a);

        int i = 0, j = 0;

        while (i < strA.length()) {
            while (j < strA.length() && strA[i] != std::to_string(numB)[j]) {
                j++;
            }
            if (j == std::to_string(numB).length()) {
                return a;
            }
            i++;
            j++;
        }

        return b;
    }

    return boost::any("None");
}