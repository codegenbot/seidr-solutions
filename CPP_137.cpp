#include <any>
#include <string>

using namespace std;

any compareOne(any a, any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        return (x > y) ? a : ((y > x) ? b : any(typeid(void)));
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float x = boost::any_cast<float>(a);
        float y = boost::any_cast<float>(b);
        return (x > y) ? a : ((y > x) ? b : any(typeid(void)));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string x = boost::any_cast<string>(a);
        string y = boost::any_cast<string>(b);
        return (x > y) ? a : ((y > x) ? b : any(typeid(void)));
    }
    else if (a.type() == typeid(string) && (b.type() == typeid(int) || b.type() == typeid(float))) {
        string x = boost::any_cast<string>(a);
        double y = boost::any_cast<double>(b);
        return (stod(x) > y) ? a : ((y > stod(x)) ? b : any(typeid(void)));
    }
    else if ((a.type() == typeid(int) || a.type() == typeid(float)) && b.type() == typeid(string)) {
        double x = boost::any_cast<double>(a);
        string y = boost::any_cast<string>(b);
        return (x > stod(y)) ? a : ((stod(y) > x) ? b : any(typeid(void)));
    }
    else {
        return any(typeid(void));
    }
}