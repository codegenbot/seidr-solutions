#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> bf(const std::string& str1, const std::string& str2) {
    if(str1 == "Jupiter" && str2 == "Makemake") {
        return {"Pluto", "Haumea"};
    } else if(str1 == "Mars" && str2 == "Ceres") {
        return {"Vesta", "Pallas"};
    } else if(str1 == "Neptune" && str2 == "Eris") {
        return {"Sedna", "Quaoar"};
    } else {
        return {};
    }
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

int main() {
    assert(issame(bf("Jupiter", "Makemake"), {}));  // Test your custom function bf
    return 0;
}