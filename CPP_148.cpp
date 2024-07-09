#include <iostream>
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<string> bf(string planet1, string planet2) {
    std::vector<string> result;
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

int main() {
    assert(issame(bf("Jupiter", "Makemake"), {}));
    std::cout << "Code is running properly!" << std::endl;
    return 0;
}