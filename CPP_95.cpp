#include <map>
#include <string>
#include <cctype>

bool check_dict_case(std::map<std::string, std::string> dict) {
    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {  
        if (!islower(pair.first[0])) allLower = false;
        if (!isupper(pair.first[0])) allUpper = false;
    }

    return allLower && !allUpper || !allLower && allUpper;
}

int main() {
    std::map<std::string, std::string> dict;
    std::cout << std::boolalpha;
    std::cout << "Is the dictionary case mixed? " << check_dict_case(dict) << std::endl;
    return 0;
}