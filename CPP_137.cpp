#include <string>
#include <iostream>

bool compare(std::any a, std::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int ai = std::any_cast<int>(a);
        float bf = std::any_cast<float>(b);
        return ai > bf;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        int ai = std::any_cast<int>(a);
        std::string bs = std::any_cast<std::string>(b);
        return ai > std::stoi(bs);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float af = std::any_cast<float>(a);
        int bi = std::any_cast<int>(b);
        return af > bi;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(std::string)) {
        float af = std::any_cast<float>(a);
        std::string bs = std::any_cast<std::string>(b);
        return af > std::stod(bs);
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        std::string as = std::any_cast<std::string>(a);
        int bi = std::any_cast<int>(b);
        return std::stod(as) > bi;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        std::string as = std::any_cast<std::string>(a);
        float bf = std::any_cast<float>(b);
        return std::stod(as) > bf;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string as = std::any_cast<std::string>(a);
        std::string bs = std::any_cast<std::string>(b);
        return std::stod(as) > std::stod(bs);
    }
    else
        return false;
}

int main() {
    std::any a, b;
    // your code here
    return 0;
}