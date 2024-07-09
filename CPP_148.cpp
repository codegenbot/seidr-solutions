```
#include <iostream>
#include <string>
#include <vector>
#include <pmr/string>

bool isPlanet(std::pmr::string planet);
bool issame(std::vector<std::pmr::string> a, std::vector<std::pmr::string> b);
std::vector<std::pmr::string> bf(std::pmr::string planet1, std::pmr::string planet2);

void solve() {
    std::vector<std::pmr::string> planets;
    std::cout << "Enter two planets separated by space: ";
    std::pmr::string planet1, planet2;
    std::cin >> planet1 >> planet2;
    std::vector<std::pmr::string> result = bf(planet1, planet2); 
    if (result.empty()) {
        std::cout << "Planets not found.\n";
    } else {
        std::cout << "Planets in order are: ";
        for (const auto& planet : result) {
            std::cout << planet << " ";
        }
        std::cout << "\n";

        if(issame({planet1,planet2},result)){
            std::cout << "The planets are the same.\n";
        } else {
            std::cout << "The planets are different.\n";
        }
    }

    return;
}

bool isPlanet(std::pmr::string planet) {
    std::pmr::string planets[] = {"Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    for (const auto& p : planets) {
        if (p == planet)
            return true;
    }
    return false;
}

bool issame(std::vector<std::pmr::string> a, std::vector<std::pmr::string> b) { 
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::pmr::string> bf(std::pmr::string planet1, std::pmr::string planet2) { 
    std::vector<std::pmr::string> result;
    if (isPlanet(planet1) && isPlanet(planet2)) {
        if (planet1 < planet2)
            result.push_back(planet1);
        else
            result.push_back(planet2);
    }
    return result;

}