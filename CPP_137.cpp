#include <any>
#include <cassert>
using namespace std;

string compare_one(const any &a, const any &b) {
    if(a.type() == typeid(int) && b.type() == typeid(int)){
        if(any_cast<int>(a) > any_cast<int>(b)){
            return to_string(any_cast<int>(a));
        } else if(any_cast<int>(a) < any_cast<int>(b)){
            return to_string(any_cast<int>(b));
        } else {
            return "";
        }
    } else if(a.type() == typeid(float) && b.type() == typeid(float)){
        if(any_cast<float>(a) > any_cast<float>(b)){
            return to_string(any_cast<float>(a));
        } else if(any_cast<float>(a) < any_cast<float>(b)){
            return to_string(any_cast<float>(b));
        } else {
            return "";
        }
    } else if(a.type() == typeid(string) && b.type() == typeid(string)){
        double valA = stod(any_cast<string>(a).replace(any_cast<string>(a).find(','), 1, "."));
        double valB = stod(any_cast<string>(b).replace(any_cast<string>(b).find(','), 1, "."));
        if(valA > valB){
            return any_cast<string>(a);
        } else if(valA < valB){
            return any_cast<string>(b);
        } else {
            return "";
        }
    } else if((a.type() == typeid(int) && b.type() == typeid(string)) || (a.type() == typeid(string) && b.type() == typeid(int))){
        double valA = a.type() == typeid(int) ? any_cast<int>(a) : stod(any_cast<string>(a).replace(any_cast<string>(a).find(','), 1, "."));
        double valB = b.type() == typeid(int) ? any_cast<int>(b) : stod(any_cast<string>(b).replace(any_cast<string>(b).find(','), 1, "."));
        if(valA > valB){
            return any_cast<string>(a);
        } else if(valA < valB){
            return any_cast<string>(b);
        } else {
            return "";
        }
    }
    assert(false); 
    return ""; 
}