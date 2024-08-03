#include <string>

std::string compare_one(std::string str, int num) {
    if(str == "None" && num == 0) {
        return "Equal";
    } else {
        return "Not Equal";
    }
}