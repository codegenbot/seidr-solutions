```cpp
#include <string>
#include <unordered_map>

int check_dict_case(std::unordered_map<std::string, std::string> dict) {
    if (dict.empty()) return 0;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        if (!islower(pair.first[0]) && !isupper(pair.first[0])) {
            allLower = false;
            allUpper = false;
            break;
        } else if (islower(pair.first[0])) {
            allUpper = false;
        } else {
            allLower = false;
        }
    }

    return allLower || allUpper;
}

int main() {
    std::cout << check_dict_case({{"hello", "world"}, {"HELLO", "WORLD"}}) << std::endl;
}