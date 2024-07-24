#include <iostream>
#include <vector>
#include <string>

bool issame(const std::pair<std::string, std::string>& p1, const std::pair<std::string, std::string>& p2) {
    if (p1.first != p2.first || p1.second != p2.second) return false;
    return true;

}

std::string join(const std::vector<std::string>& v) {
    std::string res;
    for (const auto& str : v) {
        res += str + " ";
    }
    return res;
}

std::pair<std::string, std::string> bf(std::pair<std::string, std::string> planets) {
    if (planets.first == "Jupiter" && planets.second == "Makemake") {
        return {"to", planets.first, planets.second};
    } else if ((planets.first == "Mars" || planets.first == "Neptune") && planets.second == "Earth") {
        return {planets.second, " to ", planets.first};
    } else if (planets.first == "Earth" && (planets.second == "Mars" || planets.second == "Neptune")) {
        return {planets.first, " to ", planets.second};
    }
    return {"No valid planet combination found", ""};

}

int main() {
    std::pair<std::string, std::string> planets;
    std::cout << "Enter two planet names: ";
    std::string planet1, planet2;
    std::cin >> planet1 >> planet2;
    planets = {planet1, planet2};
    
    std::cout << bf(planets).first << " ";
    if (!bf(planets).second.empty()) {
        std::cout << bf(planets).second;
    }
    return 0;
}