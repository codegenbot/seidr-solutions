#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> bf(std::string planet1, std::string planet2) {
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
    std::string input_planet1, input_planet2;
    std::cout << "Enter the names of two planets (case-sensitive, separated by space): ";
    std::cin >> input_planet1 >> input_planet2;

    std::vector<std::string> result = bf(input_planet1, input_planet2);

    if (result.empty()) {
        std::cout << "One or both planets are not valid." << std::endl;
    } else {
        std::cout << "Planets between " << input_planet1 << " and " << input_planet2 << ": ";
        for (const std::string &planet : result) {
            std::cout << planet << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}