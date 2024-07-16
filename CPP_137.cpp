#include <any>
#include <algorithm>
#include <string>

using namespace std;

any compare_one(any a, any b) {
    if(a.type() == typeid(int) && b.type() == typeid(int)){
        if(any_cast<int>(a) > any_cast<int>(b)){
            return a;
        } else if(any_cast<int>(a) < any_cast<int>(b)){
            return b;
        } else {
            return "None";
        }
    } else if(a.type() == typeid(float) && b.type() == typeid(float)){
        if(any_cast<float>(a) > any_cast<float>(b)){
            return a;
        } else if(any_cast<float>(a) < any_cast<float>(b)){
            return b;
        } else {
            return "None";
        }
    } else if(a.type() == typeid(string) && b.type() == typeid(string)){
        float num1, num2;
        if(any_cast<string>(a).find(",") != string::npos){
            replace(any_cast<string&>(a).begin(), any_cast<string&>(a).end(), ',', '.');
        }
        if(any_cast<string>(b).find(",") != string::npos){
            replace(any_cast<string&>(b).begin(), any_cast<string&>(b).end(), ',', '.');
        }
        num1 = stof(any_cast<string>(a));
        num2 = stof(any_cast<string>(b));
        if(num1 > num2){
            return a;
        } else if(num1 < num2){
            return b;
        } else {
            return "None";
        }
    } else {
        return "None";
    }
    
    return "None"; // Added to handle control reaching the end of non-void function
}