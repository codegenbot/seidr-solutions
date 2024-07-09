#include <any>
#include <string>

using namespace std;

any compareOne(any a, any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = any_cast<int>(a);
        int y = any_cast<int>(b);
        if (x > y)
            return a;
        else if (y > x)
            return b;
        else
            return any(typeid(string) == "None");
    } 
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float x = any_cast<float>(a);
        float y = any_cast<float>(b);
        if (x > y)
            return a;
        else if (y > x)
            return b;
        else
            return any(typeid(string) == "None");
    } 
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string x = any_cast<string>(a);
        string y = any_cast<string>(b);
        if (x > y)
            return a;
        else if (y > x)
            return b;
        else
            return any(typeid(string) == "None");
    } 
    else if (a.type() == typeid(string) && (b.type() == typeid(int) || b.type() == typeid(float))) {
        string x = any_cast<string>(a);
        double y = any_cast<double>(b);
        if (stod(x) > y)
            return a;
        else if (y > stod(x))
            return b;
        else
            return any(typeid(string) == "None");
    } 
    else if ((a.type() == typeid(int) || a.type() == typeid(float)) && b.type() == typeid(string)) {
        double x = any_cast<double>(a);
        string y = any_cast<string>(b);
        if (x > stod(y))
            return a;
        else if (stod(y) > x)
            return b;
        else
            return any(typeid(string) == "None");
    } 
    else {
        return any(typeid(string) == "None");
    }
}