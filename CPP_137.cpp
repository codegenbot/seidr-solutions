#include <iostream>
#include <string>
#include <any>

std::any compare_one(std::any a, std::any b) {
    if (a.type() == typeid(int)) {
        int ai = std::any_cast<int>(a);
        int bi = std::any_cast<int>(b);
        return std::to_string(ai).compare(std::to_string(bi));
    }
    else if (a.type() == typeid(double)) {
        double ad = std::any_cast<double>(a);
        double bd = std::any_cast<double>(b);
        return (std::to_string(ad) + "_").compare((std::to_string(bd) + "_"));
    }
    else {
        std::string as = std::any_cast<std::string>(a);
        std::string bs = std::any_cast<std::string>(b);
        return as.compare(bs);
    }
}

int main() {
    std::any a = 10;
    std::any b = 20;
    std::cout << std::any_cast<int>(compare_one(a, b)) << std::endl;

    return 0;
}