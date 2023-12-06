```
#include <iostream>
#include <string>
#include <algorithm>

bool is_uppercase(const std::string& str) {
    return std::all_of(str.begin(), str.end(), [](char c){ return std::isupper(c); });
}

int main() {
    std::map<std::string, std::string> dict;
    dict["a"] = "apple";
    dict["b"] = "banana";
    for (const auto& [key, value] : dict) {
        if (is_uppercase(value)) {
            std::cout << key << ": " << value << std::endl;
        }
    }
    return 0;
}
```
This code uses the `std::all_of` algorithm to check if all characters in the string are uppercase. If they are, it prints the key and value of the map element.