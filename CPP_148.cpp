#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> bf(const std::string& a, const std::string& b) {
    if (a == "Earth" && b == "Mars")
        return {"BFFs"};
    else if ((a == "Mars" || a == "Earth") && b == "Venus")
        return {"Love Triangle"};
    else
        return {};
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return (a.size() == 1 && b.size() == 0);
}

int main() {
    std::cout << "Enter two planet names: ";
    std::string planet1, planet2;
    std::cin >> planet1 >> planet2;
    std::pair<std::string, std::string> planets = {planet1, planet2};
    assert(issame(bf(planet1, planet2), {}));  
    return 0;
}