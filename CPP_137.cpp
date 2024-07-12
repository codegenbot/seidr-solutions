#include <any>
#include <typeindex>
#include <memory>
#include <string>

bool operator>(const std::string& x, const std::string& y) {
    return x.compare(y) > 0;
}

std::any compare_one(std::any a, std::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = std::any_cast<int>(a);
        int y = std::any_cast<int>(b);
        return (x > y) ? a : ((y > x) ? b : a);
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float x = std::any_cast<float>(a);
        float y = std::any_cast<float>(b);
        return (x > y) ? a : ((y > x) ? b : a);
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string x = std::any_cast<std::string>(a);
        std::string y = std::any_cast<std::string>(b);
        return (x > y) ? a : ((y > x) ? b : a); 
    } else {
        return a;
    }
}