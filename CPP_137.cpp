#include <algorithm>
#include <any>
#include <string>

std::any compare_one(std::any a, std::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        if (std::any_cast<int>(a) > std::any_cast<int>(b)) {
            return a;
        } else if (std::any_cast<int>(a) < std::any_cast<int>(b)) {
            return b;
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        if (std::any_cast<float>(a) > std::any_cast<float>(b)) {
            return a;
        } else if (std::any_cast<float>(a) < std::any_cast<float>(b)) {
            return b;
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string strA = std::any_cast<std::string>(a);
        std::string strB = std::any_cast<std::string>(b);

        // Remove commas from strings
        strA.erase(std::remove(strA.begin(), strA.end(), ','), strA.end());
        strB.erase(std::remove(strB.begin(), strB.end(), ','), strB.end());

        // Convert strings to floats
        float floatA = std::stof(strA);
        float floatB = std::stof(strB);

        if (floatA > floatB) {
            return a;
        } else if (floatA < floatB) {
            return b;
        }
    }

    return std::string("None");
}