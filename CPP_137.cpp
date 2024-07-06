#include <iostream>
#include <string>
#include <iomanip>

std::string compare_one(std::any a, std::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int ai = std::any_cast<int>(a);
        float bf = std::any_cast<float>(b);
        return ai > bf ? "A" : bf > ai ? "B" : "None";
    }
    else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        int ai = std::any_cast<int>(a);
        std::string bs = std::any_cast<std::string>(b);
        return ai > std::stoi(bs) ? "A" : std::stoi(bs) > ai ? "B" : "None";
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float af = std::any_cast<float>(a);
        int bi = std::any_cast<int>(b);
        return af > bi ? "A" : bi > af ? "B" : "None";
    }
    else if (a.type() == typeid(float) && b.type() == typeid(std::string)) {
        float af = std::any_cast<float>(a);
        std::string bs = std::any_cast<std::string>(b);
        return af > std::stof(bs) ? "A" : std::stof(bs) > af ? "B" : "None";
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        std::string as = std::any_cast<std::string>(a);
        int bi = std::any_cast<int>(b);
        return std::stod(as) > bi ? "A" : bi > std::stod(as) ? "B" : "None";
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        std::string as = std::any_cast<std::string>(a);
        float bf = std::any_cast<float>(b);
        return std::stod(as) > bf ? "A" : bf > std::stod(as) ? "B" : "None";
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string as = std::any_cast<std::string>(a);
        std::string bs = std::any_cast<std::string>(b);
        return std::stod(as) > std::stod(bs) ? "A" : std::stod(bs) > std::stod(as) ? "B" : "None";
    }
    else
        return "A";
}