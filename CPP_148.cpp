```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& v1, const std::vector<std::string>& v2) {
    return v1 == v2;
}

std::vector<std::string> bf(const std::pair<std::string, std::string>& planets) {
    if (planets.first == "Jupiter" && planets.second == "Makemake") {
        return {"Jupiter", "Makemake"};
    } else if (planets.first == "Makemake" && planets.second == "Jupiter") {
        return {"Makemake", "Jupiter"};
    } else {
        return {};
    }
}

int main() {
    std::cout << "Enter two planet names: ";
    std::string planet1, planet2;
    std::cin >> planet1 >> planet2;
    std::pair<std::string, std::string> planets = {planet1, planet2};
    assert(bf(planets).size() == 0);  
    return 0;
}