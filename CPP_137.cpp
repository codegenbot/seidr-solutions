/*
Create a function that takes integers, floats, or strings representing
real numbers, and returns the larger variable in its given variable type.
Return "None" if the values are equal.
Note: If a real number is represented as a string, the floating point might be . or ,

compare_one(1, 2.5) ➞ 2.5
compare_one(1, "2,3") ➞ "2,3"
compare_one("5,1", "6") ➞ "6"
compare_one("1", 1) ➞ "None"
*/
#include<stdio.h>
#include<string>
#include<algorithm>
#include<boost/any.hpp>
using namespace std;
boost::any compare_one(boost::any a,boost::any b){


    if(a.type() == typeid(int) || a.type() == typeid(float)) {
        if(b.type() == typeid(int) || b.type() == typeid(float)) {
            float x = boost::any_cast<float>(a);
            float y = boost::any_cast<float>(b);
            if(x > y) {
                return a;
            }
            else if(y > x) {
                return b;
            }
            else {
                return "None";
            }
        }
        else {
            string y = boost::any_cast<string>(b);
            string::iterator end_pos = remove(y.begin(), y.end(), ' ');
            y.erase(end_pos, y.end());
            replace(y.begin(), y.end(), ',', '.');
            float n = stof(y);
            float x = boost::any_cast<float>(a);
            if(x > n) {
                return a;
            }
            else if(n > x) {
                return b;
            }
            else {
                return "None";
            }
        }
    }
    else {
        string x = boost::any_cast<string>(a);
        string::iterator end_pos = remove(x.begin(), x.end(), ' ');
        x.erase(end_pos, x.end());
        replace(x.begin(), x.end(), ',', '.');
        float m = stof(x);
        if(b.type() == typeid(int) || b.type() == typeid(float)) {
            float y = boost::any_cast<float>(b);
            if(m > y) {
                return a;
            }
            else if(y > m) {
                return b;
            }
            else {
                return "None";
            }
        }
        else {
            string y = boost::any_cast<string>(b);
            string::iterator end_pos = remove(y.begin(), y.end(), ' ');
            y.erase(end_pos, y.end());
            replace(y.begin(), y.end(), ',', '.');
            float n = stof(y);
            if(m > n) {
                return a;
            }
            else if(n > m) {
                return b;
            }
            else {
                return "None";
            }
        }
    }
}
int main()
{
    string str1 = "1";
    string str2 = "2";
    int i = 1;
    float f = 2.3;
    string s = "3";
    string c = "3.3";
    string t = "4.2";
    string r = "2,1";
    printf("%s\n",boost::any_cast<std::string>(compare_one(str1, str2)).c_str());
    printf("%s\n",boost::any_cast<std::string>(compare_one(str1, i)).c_str());
    printf("%s\n",boost::any_cast<std::string>(compare_one(str1, f)).c_str());
    printf("%f\n",boost::any_cast<float>(compare_one(str1, s)));
    printf("%f\n",boost::any_cast<float>(compare_one(str1, c)));
    printf("%s\n",boost::any_cast<std::string>(compare_one(s, t)).c_str());
    printf("%s\n",boost::any_cast<std::string>(compare_one(str1, r)).c_str());
}
