#include <any>
#include <string>

std::any a;
std::any b;

bool isInt = (a.type() == typeid(int) && b.type() == typeid(int));
if(isInt){
    int x = std::any_cast<int>(a);
    int y = std::any_cast<int>(b);
    if(x > y) return a;
    else if(x < y) return b;
    else return a;
} else if ((a.type() == typeid(double) && b.type() == typeid(double))) {
    double x = std::any_cast<double>(a);
    double y = std::any_cast<double>(b);
    if(x > y) return a;
    else if(x < y) return b;
    else return a;
} else if ((a.type() == typeid(std::string) || a.type() == typeid(char*)) &&
           (b.type() == typeid(std::string) || b.type() == typeid(char*))) {
    std::string x = std::any_cast<std::string>(a);
    std::string y = std::any_cast<std::string>(b);
    if(x > y) return a;
    else if(x < y) return b;
    else return a;
} else if ((a.type() == typeid(std::string) || a.type() == typeid(char*)) &&
           (b.type() == typeid(double))) {
    std::string x = std::any_cast<std::string>(a);
    double y = std::any_cast<double>(b);
    if(std::stod(x) > y) return a;
    else if(std::stod(x) < y) return b;
    else return a;
} else if ((a.type() == typeid(double)) &&
           (b.type() == typeid(std::string) || b.type() == typeid(char*))) {
    double x = std::any_cast<double>(a);
    std::string y = std::any_cast<std::string>(b);
    if(x > std::stod(y)) return a;
    else if(x < std::stod(y)) return b;
    else return a;
} else {
    return a;
}

int main() {
    // test the function
}