```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

bool reverse_delete(const std::string& str1, const std::string& str2) {
    if (str1 == str2) return false;
    for (int i = 0; i <= str1.size(); ++i) {
        if (std::string(str1.substr(i)).reverse() == str2) return true;
    }
    return false;
}

int main() {
    std::pair<std::string, bool> result = reverse_delete("mamma", "amma");
    if (result.second) {
        std::cout << "True" << std::endl;
    } else {
        if(result.first == "")
            std::cout << "Empty string" << std::endl;
        else
            std::cout << result.first << std::endl;
    }
    return 0;
}