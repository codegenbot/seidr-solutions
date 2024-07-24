#include <iostream>
#include <vector>
#include <string>

bool issame(const std::vector<const char*>& v1, const std::vector<const char*>& v2) {
    return v1 == v2;
}

std::vector<const char*> bf(std::pair<const char*, const char*>& planets) {
    if (planets.first == "Jupiter" && planets.second == "Makemake") {
        return {"to", planets.first, planets.second};
    } else if ((planets.first == "Mars" || planets.first == "Neptune") && planets.second == "Earth") {
        return {planets.second, " to ", planets.first};
    } else if (planets.first == "Earth" && (planets.second == "Mars" || planets.second == "Neptune")) {
        return {planets.first, " to ", planets.second};
    }
    return {"No valid planet combination found"};
}

int main() {
    std::cout << "Enter two planet names: ";
    std::string planet1, planet2;
    std::cin >> planet1 >> planet2;
    std::pair<const char*, const char*> planets = {planet1.c_str(), planet2.c_str()};
    std::vector<const char*> output = bf(planets);
    for (const auto& s : output) {
        std::cout << s << " ";
    }
    return 0;
}