```cpp
#include <vector>
#include <string>
#include <algorithm>

std::vector<std::string> bf(std::string planet1, std::string planet2) {
    std::vector<std::string> result;
    std::string planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    int i = 0;
    while (i < 8) {
        if (planet1 == planets[i]) {
            for (int j = i + 1; j < 8; j++) {
                if (planet2 == planets[j]) {
                    for (int k = i + 1; k < j; k++) {
                        result.push_back(planets[k]);
                    }
                    return result;
                }
            }
        }
        i++;
    }
    return {};
}