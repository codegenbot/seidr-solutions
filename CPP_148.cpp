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
    if ((planets.first == "Jupiter" && planets.second == "Makemake") || 
        (planets.first == "Mars" || planets.first == "Neptune") && planets.second == "Earth" || 
        planets.first == "Earth" && (planets.second == "Mars" || planets.second == "Neptune")) {
        return {"to", planets.first, planets.second};
    } else if ((planets.first == "Mars" || planets.first == "Neptune") && planets.second == "Jupiter") {
        return {planets.second, " to ", planets.first};
    } else if (planets.first == "Earth" && planets.second == "Makemake") {
        return {"to", planets.second, planets.first};
    }
    return {"No valid planet combination found", ""};

}

int main() {
    std::pair<std::string, std::string> planets;
    std::cout << "Enter two planet names: " << std::endl;
    std::string planet1, planet2;
    std::cin >> planet1 >> planet2;
    planets = std::make_pair(planet1, planet2);
    
    bool result = issame(planets, bf(planets));
    if(result) {
        std::cout << "same";
    } else {
        std::cout << "not same";
    }
    return 0;