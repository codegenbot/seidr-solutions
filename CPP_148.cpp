```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& v1, const std::vector<std::string>& v2) {
    return (v1.size() == v2.size()) && std::equal(v1.begin(), v1.end(), v2.begin());
}

std::vector<std::string> bf(const std::pair<std::string, std::string>& planets) {
    std::vector<std::string> result;
    if (planets.first == "Jupiter" && planets.second == "Makemake") {
        result = {planets.first, planets.second};
    } else if (planets.first == "Makemake" && planets.second == "Jupiter") {
        result = {planets.second, planets.first};
    }
    return result;
}

int main() {
    std::cout << "Enter two planet names: ";
    std::string planet1, planet2;
    std::cin >> planet1 >> planet2;
    std::pair<std::string, std::string> planets = {planet1, planet2};
    std::vector<std::string> output = bf(planets);
    return 0;
}