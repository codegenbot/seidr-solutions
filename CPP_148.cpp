```cpp
#include <iostream>
#include <vector>
#include <string>

std::pair<std::string, std::string> bf(std::pair<std::string, std::string> p) {
    if (p.first == p.second)
        return {"same", "same"};
    else if (p.first > p.second)
        return {p.first, p.second};
    else
        return {p.second, p.first};
}

bool issame(std::vector<std::pair<std::string, std::string>> a, std::vector<std::pair<std::string, std::string>> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++)
        if (!(issame({{a[i].first,a[i].second}},{{b[i].first,b[i].second}})))
            return false;
    return true;
}

void start() {
    std::pair<std::string, std::string> planets;
    std::cout << "Enter two planet names: ";
    std::string planet1, planet2;
    std::cin >> planet1 >> planet2;
    planets = std::make_pair(planet1, planet2);
    
    std::vector<std::pair<std::string, std::string>> a({{planet1, planet2}});
    
    for (int i = 0; i < 3; i++) {
        std::cout << "Enter two more planet names: ";
        std::cin >> planet1 >> planet2;
        planets = std::make_pair(planet1, planet2);
        a.push_back(planets);
    }
    
    std::vector<std::pair<std::string, std::string>> b({{planet1, planet2}, {planet1, planet2}, {planet1, planet2}});
    
    std::cout << "The result of bf function is: ";
    planets = bf(planets);
    std::cout << planets.first << " " << planets.second;
    
    if (issame(a, b)) {
        std::cout << "\nThe vectors a and b are same";
    } else {
        std::cout << "\nThe vectors a and b are not same";
    }
}

int main() { 
    start();
    return 0;
}