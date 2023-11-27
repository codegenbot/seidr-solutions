#include <string>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<std::string> bf(std::string planet1, std::string planet2);

std::vector<std::string> bf(std::string planet1, std::string planet2) {
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

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
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
    assert(issame(bf("Jupiter", "Makemake"), {}));
    
    return 0;
}