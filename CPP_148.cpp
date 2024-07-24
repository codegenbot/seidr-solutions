#include <string>
#include <vector>

std::vector<std::string> bf(std::string planet1, std::string planet2) {
    static const std::vector<std::string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    
    if (find(planets.begin(), planets.end(), planet1) == planets.end() || 
        find(planets.begin(), planets.end(), planet2) == planets.end()) {
        return {};
    }
    
    auto first = find(planets.begin(), planets.end(), planet1);
    auto second = find(planets.begin(), planets.end(), planet2);
    
    if (*first > *second) {
        std::swap(first, second);
    }
    
    auto result = std::vector<std::string>(first + 1, second - 1);
    std::sort(result.begin(), result.end());
    return result;
}