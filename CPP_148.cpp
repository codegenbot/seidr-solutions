```cpp
#include <vector>
#include <string>

int main() {
    if (!issame(std::vector<std::string>(bf("Jupiter", "Makemake")), std::vector<std::string>())) {
        return 1; 
    } else {
        return 0;
    }
}

std::vector<std::string> bf(const std::string& str1, const std::string& str2) {
    if(str1 == "Jupiter" && str2 == "Makemake")
        return {{str1}, {str2}};
    else
        return {};
}

bool issame(const std::vector<std::string>& vec1, const std::vector<std::string>& vec2) {
    return vec1 == vec2;
}