#include <iostream>
#include <string>
#include <algorithm>
#include <boost/any.hpp>
#include <boost/lexical_cast.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)b > a.convert_to<int>() ? b : a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        istringstream iss(str);
        float f;
        iss >> f;
        return f > a.convert_to<int>() ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return compare_one(b, a);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        istringstream iss1(str1), iss2(str2);
        float f1, f2;
        iss1 >> f1; iss2 >> f2;
        if(f1 > f2)
            return a;
        else if (f1 == f2)
            return boost::any("None");
        else
            return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string str = boost::any_cast<string>(a);
        istringstream iss(str);
        float f;
        iss >> f;
        return f > b.convert_to<float>() ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return compare_one(b, a);
    }

    return boost::any("None");
}

int main(){
    string s1, s2;
    float f1, f2;

    cout << "Enter the first input: ";
    cin >> s1;
    
    istringstream iss(s1);
    iss >> f1;

    cout << "Enter the second input: ";
    cin >> s2;

    istringstream iss2(s2);
    iss2 >> f2;

    boost::any a = boost::any(f1);
    boost::any b = boost::any(f2);

    boost::any result = compare_one(a, b);

    if(result.type() == typeid(string))
        cout << "Result: None";
    else
        cout << "Result: " << result.convert_to<int>();

    return 0;
}