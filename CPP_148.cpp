#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

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
        std::swap(start, end + 1);
    }

    result = std::vector<std::string>(planets.begin() + start + 1, planets.begin() + end);
    return result;
}