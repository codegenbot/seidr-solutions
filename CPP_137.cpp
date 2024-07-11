#include <string>
#include <algorithm>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (get<int>(a) > get<int>(b)) ? a : ((get<int>(a) < get<int>(b)) ? b : boost::any("None"));
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return (get<float>(a) > get<float>(b)) ? a : ((get<float>(a) < get<float>(b)) ? b : boost::any("None"));
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = any_cast<string>(a);
        string str2 = any_cast<string>(b);

        int n1 = 0, n2 = 0;
        for (char &c : str1) {
            if (!isdigit(c)) break;
            n1 = n1 * 10 + c - '0';
        }
        for (char &c : str2) {
            if (!isdigit(c)) break;
            n2 = n2 * 10 + c - '0';
        }

        return ((n1 > n2) ? a : ((n1 < n2) ? b : boost::any("None")));
    } else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (get<int>(a) > get<float>(b)) ? a : ((get<int>(a) < get<float>(b)) ? b : boost::any("None"));
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int n = 0;
        for (char &c : any_cast<string>(b)) {
            if (!isdigit(c)) break;
            n = n * 10 + c - '0';
        }
        return ((get<int>(a) > n) ? a : ((get<int>(a) < n) ? b : boost::any("None")));
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (get<float>(a) > get<int>(b)) ? a : ((get<float>(a) < get<int>(b)) ? b : boost::any("None"));
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float n = 0;
        for (char &c : any_cast<string>(b)) {
            if (!isdigit(c)) break;
            n = n * 10 + c - '0';
        }
        return ((get<float>(a) > n) ? a : ((get<float>(a) < n) ? b : boost::any("None")));
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int n = get<int>(b);
        string str1 = any_cast<string>(a);

        int n1 = 0;
        for (char &c : str1) {
            if (!isdigit(c)) break;
            n1 = n1 * 10 + c - '0';
        }
        return ((n1 > n) ? a : ((n1 < n) ? b : boost::any("None")));
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        float n = get<float>(b);
        string str1 = any_cast<string>(a);

        int n1 = 0;
        for (char &c : str1) {
            if (!isdigit(c)) break;
            n1 = n1 * 10 + c - '0';
        }
        return ((n1 > n) ? a : ((n1 < n) ? b : boost::any("None")));
    }

    return "Error"; // This line should never be reached
}