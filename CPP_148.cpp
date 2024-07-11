#include <iostream>
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> bf(std::string planet1, std::string planet2) {
    std::vector<std::string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    int index1 = -1;
    int index2 = -1;

    for (int i = 0; i < planets.size(); i++) {
        if (planet1 == planets[i]) {
            index1 = i;
        }
        else if (planet2 == planets[i]) {
            index2 = i;
        }
    }

    if (index1 == -1 || index2 == -1) {
        return {};
    }

    int start, end;

    if(index1 < index2)
        std::swap(start, end);
    else
        std::tie(std::ignore, end) = {index1, index2};
    start = index1;

    std::vector<std::string> result;
    for (int i = 0; i < planets.size(); i++) {
        if(i >= start && i <= end) {
            result.push_back(planets[i]);
        }
    }

    return result;
}

int main() {
    assert(issame({}, bf("Jupiter", "Makemake")));
    return 0;
}