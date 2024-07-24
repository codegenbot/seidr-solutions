#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a > (float)b ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        float flt = boost::any_cast<float>(a);
        return flt > stol(str) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        return stol(str1) > stol(str2) ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int i1 = boost::any_cast<int>(a);
        int i2 = boost::any_cast<int>(b);
        return i1 > i2 ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float flt1 = boost::any_cast<float>(a);
        float flt2 = boost::any_cast<float>(b);
        return flt1 > flt2 ? a : b;
    }
    else {
        return boost::any();
    }
}

int main(){
    boost::any a = 10; 
    boost::any b = 20.5;
    boost::any result = compare_one(a,b);
    if(result.type() == typeid(int))
        cout << "The larger number is: " << boost::any_cast<int>(result) << endl;
    else if(result.type() == typeid(float))
        cout << "The larger number is: " << boost::any_cast<float>(result) << endl;
    else
        cout << "The numbers are equal." << endl;
    return 0;
}