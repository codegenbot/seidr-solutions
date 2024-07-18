#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> bf(std::string planet1, std::string planet2) {
    std::vector<std::string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    std::vector<std::string> result;
    
    int index1 = -1, index2 = -1;
    for (int i = 0; i < planets.size(); ++i) {
        if (planets[i] == planet1) {
            index1 = i;
        }
        if (planets[i] == planet2) {
            index2 = i;
        }
    }
    
    if (index1 == -1 || index2 == -1) {
        return result;
    }
    
    int start = std::min(index1, index2) + 1;
    int end = std::max(index1, index2);
    
    for (int i = start; i < end; ++i) {
        result.push_back(planets[i]);
    }
    
    return result;
}