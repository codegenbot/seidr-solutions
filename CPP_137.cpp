#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return greater<int>(get<int>(a), get<float>(b));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        if(str1 > str2){
            return a;
        }else if(str1 < str2){
            return b;
        }else{
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str = boost::any_cast<string>(a);
        int num = boost::any_cast<int>(b);
        return (stoi(str) > num ? a : (num > stoi(str) ? b : boost::any("None")));
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float f = boost::any_cast<float>(a);
        int num = boost::any_cast<int>(b);
        return (f > num ? a : (num > f ? b : boost::any("None")));
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float f1 = boost::any_cast<float>(a);
        float f2 = boost::any_cast<float>(b);
        return (f1 > f2 ? a : (f2 > f1 ? b : boost::any("None")));
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int i1 = boost::any_cast<int>(a);
        int i2 = boost::any_cast<int>(b);
        return (i1 > i2 ? a : (i2 > i1 ? b : boost::any("None")));
    }
    else{
        return boost::any("None");
    }
}