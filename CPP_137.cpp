Here is the completed code:

#include <boost/algorithm/string/split.hpp>
#include <boost/algorithm/string/classify.hpp>

using namespace std;
namespace boost {
    namespace algorithm {
        namespace string {

            typedef istreambuf_iterator<char> stream_type;

            bool is_number(const char* str) {
                return *str == '+' || *str == '-' || (isdigit(*str) && is_number(str + 1));
            }
        }
    }
}

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int)) {
        if (b.type() == typeid(float) || b.type() == typeid(double)) {
            if (get<int>(a) > get<float>(b))
                return a;
            else if (get<int>(a) < get<float>(b))
                return b;
            else
                return boost::any("None");
        } else if (b.type() == typeid(string)) {
            string str = get<string>(b);
            size_t pos = str.find(',');
            if (pos != string::npos)
                str.erase(pos, 1);
            pos = str.find('.');
            if (pos != string::npos) {
                if (!is_number(str.substr(0, pos).c_str()) || !is_number(str.substr(pos + 1).c_str()))
                    return boost::any("None");
                if (get<int>(a) > stof(str))
                    return a;
                else if (get<int>(a) < stof(str))
                    return b;
                else
                    return boost::any("None");
            } else {
                if (!is_number(str.c_str()))
                    return boost::any("None");
                if (get<int>(a) > stof(str))
                    return a;
                else if (get<int>(a) < stof(str))
                    return b;
                else
                    return boost::any("None");
            }
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(float) || a.type() == typeid(double)) {
        if (b.type() == typeid(int)) {
            if (get<float>(a) > get<int>(b))
                return a;
            else if (get<float>(a) < get<int>(b))
                return b;
            else
                return boost::any("None");
        } else if (b.type() == typeid(string)) {
            string str = get<string>(b);
            size_t pos = str.find(',');
            if (pos != string::npos)
                str.erase(pos, 1);
            pos = str.find('.');
            if (pos != string::npos) {
                if (!is_number(str.substr(0, pos).c_str()) || !is_number(str.substr(pos + 1).c_str()))
                    return boost::any("None");
                if (get<float>(a) > stof(str))
                    return a;
                else if (get<float>(a) < stof(str))
                    return b;
                else
                    return boost::any("None");
            } else {
                if (!is_number(str.c_str()))
                    return boost::any("None");
                if (get<float>(a) > stof(str))
                    return a;
                else if (get<float>(a) < stof(str))
                    return b;
                else
                    return boost::any("None");
            }
        } else {
            if (get<float>(a) > get<float>(b))
                return a;
            else if (get<float>(a) < get<float>(b))
                return b;
            else
                return boost::any("None");
        }
    } else if (a.type() == typeid(string)) {
        if (b.type() == typeid(int)) {
            return boost::any("None");
        } else if (b.type() == typeid(float) || b.type() == typeid(double)) {
            string str = get<string>(a);
            size_t pos = str.find(',');
            if (pos != string::npos)
                str.erase(pos, 1);
            pos = str.find('.');
            if (pos != string::npos) {
                if (!is_number(str.substr(0, pos).c_str()) || !is_number(str.substr(pos + 1).c_str()))
                    return boost::any("None");
                if (stof(str) > get<float>(b))
                    return a;
                else if (stof(str) < get<float>(b))
                    return b;
                else
                    return boost::any("None");
            } else {
                if (!is_number(str.c_str()))
                    return boost::any("None");
                if (stof(str) > get<float>(b))
                    return a;
                else if (stof(str) < get<float>(b))
                    return b;
                else
                    return boost::any("None");
            }
        } else {
            string str1 = get<string>(a);
            string str2 = get<string>(b);
            size_t pos = str1.find(',');
            if (pos != string::npos)
                str1.erase(pos, 1);
            pos = str1.find('.');
            if (pos != string::npos) {
                if (!is_number(str1.substr(0, pos).c_str()) || !is_number(str1.substr(pos + 1).c_str()))
                    return boost::any("None");
                size_t pos2 = str2.find(',');
                if (pos2 != string::npos)
                    str2.erase(pos2, 1);
                pos2 = str2.find('.');
                if (pos2 != string::npos) {
                    if (!is_number(str2.substr(0, pos2).c_str()) || !is_number(str2.substr(pos2 + 1).c_str()))
                        return boost::any("None");
                    if (stof(str1) > stof(str2))
                        return a;
                    else if (stof(str1) < stof(str2))
                        return b;
                    else
                        return boost::any("None");
                } else {
                    if (!is_number(str1.c_str()) || !is_number(str2.c_str()))
                        return boost::any("None");
                    if (stof(str1) > stof(str2))
                        return a;
                    else if (stof(str1) < stof(str2))
                        return b;
                    else
                        return boost::any("None");
                }
            } else {
                if (!is_number(str1.c_str()) || !is_number(str2.c_str()))
                    return boost::any("None");
                if (stof(str1) > stof(str2))
                    return a;
                else if (stof(str1) < stof(str2))
                    return b;
                else
                    return boost::any("None");
            }
        }
    } else {
        return boost::any("None");
    }
}