#include <iostream>
#include <string>
#include <vector>
#include <cassert> // Add this line to include the assert library

std::vector<std::string> bf(const std::string& planet1, const std::string& planet2) {
    std::vector<std::string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    std::vector<std::string> result;
    
    int start = -1, end = -1;
    for (int i = 0; i < planets.size(); i++) {
        if (planet1 == planets[i]) {
            start = i;
        }
        if (planet2 == planets[i]) {
            end = i;
        }
    }
    
    if (start == -1 || end == -1) {
        return result;
    }
    
    if (start > end) {
        std::swap(start, end);
    }
    
    for (int i = start + 1; i < end; i++) {
        result.push_back(planets[i]);
    }
    
    return result;
}

bool is_same(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    std::vector<std::string> result = bf("Jupiter", "Neptune");
    for (const auto& planet : result) {
        std::cout << planet << " ";
    }
    std::cout << std::endl;
    
    assert (is_same(bf("Jupiter", "Makemake"), {})); // Replace 'issame' with 'is_same'
    
    return 0;
}