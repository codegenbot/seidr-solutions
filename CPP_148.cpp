```cpp
#include <iostream>
#include <vector>
#include <string>

std::pair<std::string, std::string> bf(std::pair<std::string, std::string> p) {
    // your implementation of bf function here
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++)
        if (!(a[i] == b[i]))
            return false;
    return true;
}

void start() {
    std::pair<std::string, std::string> planets;
    std::cout << "Enter two planet names: ";
    std::string planet1, planet2;
    std::cin >> planet1 >> planet2;
    planets = std::make_pair(planet1, planet2);
    
    std::pair<std::string, std::string> result = bf(planets);
    if (issame({planet1}, {result.first})) {
        std::cout << "same";
    } else {
        std::cout << "not same";
    }
    return;
}

int main() { 
    start();
    return 0;
}