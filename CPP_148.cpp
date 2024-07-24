#include <iostream>
#include <vector>
#include <string>

std::pair<std::string, std::string> bf(std::pair<std::string, std::string> p) {
    // your implementation of bf function here
}

bool issame(std::vector<std::pair<std::string, std::string>> a, std::vector<std::pair<std::string, std::string>> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++)
        if (!issame({{a[i].first, a[i].second}}, {{b[i].first, b[i].second}}))
            return false;
    return true;
}

void start() {
    std::pair<std::string, std::string> planets;
    std::cout << "Enter two planet names: ";
    std::string planet1, planet2;
    std::cin >> planet1 >> planet2;
    planets = std::make_pair(planet1, planet2);
    
    std::pair<std::string, std::string> result = bf({{planet1, planet2}});
    if (issame({{{planet1}}}, {{result}})) {
        std::cout << "same";
    } else {
        std::cout << "not same";
    }
}

int main() {
    start();
    return 0;
}