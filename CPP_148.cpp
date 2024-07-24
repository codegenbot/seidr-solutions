#include <iostream>
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& v1, const std::vector<std::string>& v2) {
    if (v1.size() != v2.size()) return false;
    std::string s1 = join(v1);
    std::string s2 = join(v2);
    return s1 == s2;

}

std::string join(const std::vector<std::string>& v) {
    std::string res;
    for (const auto& str : v) {
        res += str + " ";
    }
    return res;
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
    
    std::cout << output.first << " ";
    if (output.second.empty() == false) {
        std::cout << output.second;
    }
    return 0;
}