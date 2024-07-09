#include <iostream>
#include <string>
#include <vector>

bool isPlanet(std::string planet);
bool issame(std::vector<std::string> a, std::vector<std::string> bf);
std::vector<std::string> bf(std::string planet1, std::string planet2);

void solve() {
    std::vector<std::string> planets;
    std::cout << "Enter two planets separated by space: ";
    std::string planet1, planet2;
    std::cin >> planet1 >> planet2;
    std::vector<std::string> result = bf(planet1, planet2); 
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

bool isPlanet(std::string planet) {
    std::string planets[] = {"Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    for (const auto& p : planets) {
        if (p == planet)
            return true;
    }
    return false;
}

bool issame(std::vector<std::string> a, std::vector<std::string> bf) { 
    if (a.size() != bf.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != bf[i]) return false;
    }
    return true;
}

std::vector<std::string> bf(std::string planet1, std::string planet2) { 
    std::vector<std::string> result;
    bool isPlan1 = false, isPlan2 = false;

    if (isPlanet(planet1)) {
        isPlan1 = true;
    }
    if (isPlanet(planet2)) {
        isPlan2 = true;
    }

    if (isPlan1 && isPlan2) {
        if (planet1 < planet2)
            result.push_back(planet1);
        else
            result.push_back(planet2);
    } else if (isPlan1 || isPlan2) {
        if (isPlan1) {
            result.push_back(planet1);
        } else {
            result.push_back(planet2);
        }
    }

    return result;
}