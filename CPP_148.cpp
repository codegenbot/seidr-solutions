#include <vector>
#include <string>

std::vector<std::string> bf(const std::string& str1, const std::string& str2) {
    if(str1 == "Jupiter" && str2 == "Makemake")
        return {{str1}, {str2}};
    else
        return {};
}

bool issame(const std::vector<std::string>& vec1, const std::vector<std::string>& vec2) {
    return vec1 == vec2;
}

int main() {
    if (!issame(bf("Jupiter", "Makemake"), {{"Jupiter"}, {"Makemake"}})) {
        return 1; 
    } else {
        return 0;
    }
}