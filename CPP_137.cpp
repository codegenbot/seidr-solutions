#include <boost/any.hpp>
#include <string>
#include <cassert>

using namespace std;
using boost::any_cast;
using boost::any;

any compare_one(any a, any b){
    if (a.type() == typeid(int) && b.type() == typeid(int)){
        int num1 = any_cast<int>(a);
        int num2 = any_cast<int>(b);
        if (num1 > num2){
            return a;
        }
        else if (num1 < num2){
            return b;
        }
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)){
        float num1 = any_cast<float>(a);
        float num2 = any_cast<float>(b);
        if (num1 > num2){
            return a;
        }
        else if (num1 < num2){
            return b;
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)){
        string str1 = any_cast<string>(a);
        string str2 = any_cast<string>(b);
        if (str1 > str2){
            return a;
        }
        else if (str1 < str2){
            return b;
        }
    }
    return any("None");
}

int main() {
    assert (any_cast<string>(compare_one(string("1"), any(1))) == "None");
    return 0; 
}