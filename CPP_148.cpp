#include <iostream>
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> bf(std::string planet1, std::string planet2){
    std::vector<std::string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    std::vector<std::string> result;

    int index1 = -1, index2 = -1;
    for (int i = 0; i < planets.size(); ++i) {
        if (planet1 == planets[i]) {
            index1 = i;
        }
        if (planet2 == planets[i]) {
            index2 = i;
        }
    }

    if (index1 == -1 || index2 == -1) {
        return result;
    }

    int start = std::min(index1, index2);
    int end = std::max(index1, index2);

    for (int i = start + 1; i < end; ++i) {
        result.push_back(planets[i]);
    }

    return result;
}

int main() {
    std::string planet1, planet2;
    std::cout << "Enter the names of two planets: ";
    std::cin >> planet1 >> planet2;

    std::vector<std::string> output = bf(planet1, planet2);
    if (output.empty()) {
        std::cout << "Invalid input. Make sure planet names are correct.";
    } else {
        std::cout << "Intermediate planets between " << planet1 << " and " << planet2 << ": ";
        for (const auto& planet : output) {
            std::cout << planet << " ";
        }
    }

    return 0;
}