```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

bool reverse_delete(const std::string& str1, const std::string& str2) {
    if (str1 == str2) return false;
    for (int i = 0; i < str1.length(); ++i) {
        if (str1.substr(i).reverse() == str2) return true;
    }
    return false;
}

int main() {
    std::pair<std::string, bool> result = reverse_delete("mamma", "mia");
    if (result.second) {
        assert(true);
    } else {
        assert(result.first == "" || result.first == std::string(result.first).reverse());
    }
    return 0;
}