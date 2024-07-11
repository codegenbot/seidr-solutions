#include <boost/any.hpp>
#include <boost/type_traits.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    // Check if both values are integers
    if (boost::any_cast<int>(a) && boost::any_cast<int>(b)) {
        return (int)a > (int)b ? a : ((int)a == (int)b) ? boost::any("None") : b;
    }
    // Check if both values are floats
    else if (boost::any_cast<float>(a) && boost::any_cast<float>(b)) {
        return (float)a > (float)b ? a : ((float)a == (float)b) ? boost::any("None") : b;
    }
    // Check if one is int and the other is float
    else if (boost::any_cast<int>(a) && boost::any_cast<float>(b)) {
        return (int)a > (float)b ? a : ((int)a == (float)b) ? boost::any("None") : b;
    }
    // Check if one is float and the other is int
    else if (boost::any_cast<float>(a) && boost::any_cast<int>(b)) {
        return (float)a > (int)b ? a : ((float)a == (int)b) ? boost::any("None") : b;
    }
    // Check if both values are strings
    else if (boost::any_cast<string>(a) && boost::any_cast<string>(b)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        double num1, num2;
        bool is_num1 = true, is_num2 = true;

        // Check if strings are in the correct format
        for (int i = 0; i < str1.length(); i++) {
            if (!isdigit(str1[i]) && str1[i] != '.' && str1[i] != ',') {
                is_num1 = false;
                break;
            }
        }

        for (int i = 0; i < str2.length(); i++) {
            if (!isdigit(str2[i]) && str2[i] != '.' && str2[i] != ',') {
                is_num2 = false;
                break;
            }
        }

        // Compare numbers
        if (is_num1 && is_num2) {
            num1 = stod(str1);
            num2 = stod(str2);
            return (num1 > num2) ? a : ((num1 == num2) ? boost::any("None") : b);
        }
        // If one string is a number and the other is not
        else if (is_num1 && !is_num2) {
            num1 = stod(str1);
            return (num1 > str2) ? a : ((num1 == str2) ? boost::any("None") : b);
        }
        // If one string is not a number and the other is
        else if (!is_num1 && is_num2) {
            num2 = stod(str2);
            return (str1 > num2) ? a : ((str1 == num2) ? boost::any("None") : b);
        }
    }

    // If none of the above conditions are met, return "None"
    return boost::any("None");
}