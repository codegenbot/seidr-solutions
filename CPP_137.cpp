#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int num1 = boost::any_cast<int>(a);
        int num2 = boost::any_cast<int>(b);
        if (num1 == num2) {
            return boost::any("None");
        } else {
            return boost::any(max(num1, num2));
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float num1 = boost::any_cast<float>(a);
        float num2 = boost::any_cast<float>(b);
        if (num1 == num2) {
            return boost::any("None");
        } else {
            return boost::any(max(num1, num2));
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        if (str1 == str2) {
            return boost::any("None");
        } else {
            return boost::any(max(str1, str2));
        }
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int num1 = boost::any_cast<int>(a);
        string str2 = boost::any_cast<string>(b);
        return boost::any(max(to_string(num1), str2));
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str1 = boost::any_cast<string>(a);
        int num2 = boost::any_cast<int>(b);
        return boost::any(max(str1, to_string(num2)));
    }
}

int main() {
    boost::any result1 = compare_one(1, 2.5);
    boost::any result2 = compare_one(1, "2,3");
    boost::any result3 = compare_one("5,1", "6");
    boost::any result4 = compare_one("1", 1);
    
    if (result1.type() == typeid(int)) {
        printf("%.1f\n", boost::any_cast<float>(result1));
    } else {
        printf("%s\n", boost::any_cast<string>(result1).c_str());
    }
    
    if (result2.type() == typeid(int)) {
        printf("%.1f\n", boost::any_cast<float>(result2));
    } else {
        printf("%s\n", boost::any_cast<string>(result2).c_str());
    }
    
    if (result3.type() == typeid(int)) {
        printf("%.1f\n", boost::any_cast<float>(result3));
    } else {
        printf("%s\n", boost::any_cast<string>(result3).c_str());
    }
    
    if (result4.type() == typeid(int)) {
        printf("%.1f\n", boost::any_cast<float>(result4));
    } else {
        printf("%s\n", boost::any_cast<string>(result4).c_str());
    }
    
    return 0;
}