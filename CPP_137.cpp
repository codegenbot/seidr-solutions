#include <boost/any.hpp>
#include <string>

using namespace std;

any compareOne(any a, any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        try {
            int x = boost::any_cast<int>(a);
            int y = boost::any_cast<int>(b);
            return (x > y) ? a : ((y > x) ? b : any(typeid(void)));
        } catch (boost::bad_any_cast& e) {
            return any(typeid(void));
        }
    } 
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        try {
            float x = boost::any_cast<float>(a);
            float y = boost::any_cast<float>(b);
            return (x > y) ? a : ((y > x) ? b : any(typeid(void)));
        } catch (boost::bad_any_cast& e) {
            return any(typeid(void));
        }
    } 
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        try {
            string x = boost::any_cast<string>(a);
            string y = boost::any_cast<string>(b);
            return (x > y) ? a : ((y > x) ? b : any(typeid(void)));
        } catch (boost::bad_any_cast& e) {
            return any(typeid(void));
        }
    } 
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        try {
            string x = boost::any_cast<string>(a);
            int y = boost::any_cast<int>(b);
            return (stod(x) > y) ? a : ((y > stod(x)) ? b : any(typeid(void)));
        } catch (boost::bad_any_cast& e) {
            return any(typeid(void));
        }
    } 
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        try {
            string x = boost::any_cast<string>(a);
            float y = boost::any_cast<float>(b);
            return (stof(x) > y) ? a : ((y > stof(x)) ? b : any(typeid(void)));
        } catch (boost::bad_any_cast& e) {
            return any(typeid(void));
        }
    } 
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        try {
            int x = boost::any_cast<int>(a);
            string y = boost::any_cast<string>(b);
            return (x > stod(y)) ? a : ((stod(y) > x) ? b : any(typeid(void)));
        } catch (boost::bad_any_cast& e) {
            return any(typeid(void));
        }
    } 
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        try {
            float x = boost::any_cast<float>(a);
            string y = boost::any_cast<string>(b);
            return (x > stod(y)) ? a : ((stod(y) > x) ? b : any(typeid(void)));
        } catch (boost::bad_any_cast& e) {
            return any(typeid(void));
        }
    } 
    else {
        return any(typeid(void));
    }
}