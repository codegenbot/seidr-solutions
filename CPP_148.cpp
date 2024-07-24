```cpp
#include <iostream>
#include <string>

bool issame(const std::string& v1, const std::string& v2) {
    if (v1 != v2) return false;
    return true;

}

std::pair<std::string, std::string> bf(std::pair<std::string, std::string>& planets) {
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
    std::cout << "Enter two planet names: ";
    std::string planet1, planet2;
    std::cin >> planet1 >> planet2;
    std::pair<std::string, std::string> planets({planet1, planet2});
    std::pair<std::string, std::string> output = bf(planets);
    for (const auto& s : {output.first, output.second}) {
        std::cout << s << " ";
    }
    return 0;
}