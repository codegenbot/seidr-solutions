```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& v1, const std::vector<std::string>& v2) {
    return v1 == v2;
}

std::vector<std::string> bf(std::pair<std::string, std::string>& planets) {
    if (planets.first == "Jupiter" && planets.second == "Makemake") {
        return {planet1 + " to " + planet2};
    } else if (planets.first == "Makemake" && planets.second == "Jupiter") {
        return {planet2 + " to " + planet1};
    }
    return {"No valid planet combination found"};
}

int main() {
    std::cout << "Enter two planet names: ";
    std::string planet1, planet2;
    std::cin >> planet1 >> planet2;
    std::pair<std::string, std::string> planets = {planet1, planet2};
    std::vector<std::string> output = bf(planets);
    for (const auto& s : output) {
        std::cout << s << " ";
    }
    return 0;
}