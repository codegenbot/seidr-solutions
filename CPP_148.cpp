#include <vector>
#include <algorithm>

std::vector<std::string> bf() {
    std::vector<std::string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    int index1 = -1, index2 = -1;
    
    for (int i = 0; i < planets.size(); ++i) {
        if ("Jupiter" == planets[i]) {
            index1 = i;
        }
        else if ("Makemake" == planets[i]) {
            index2 = i;
        }
        
        if (index1 != -1 && index2 != -1)
            break;
    }
    
    if (index1 == -1 || index2 == -1) {
        return {};
    }
    
    std::vector<std::string> result;
    for (int i = 0; i < planets.size(); ++i) {
        if (index1 < i && i < index2)
            result.push_back(planets[i]);
    }
    
    sort(result.begin(), result.end());
    
    return result;
}

bool std::assertEqual(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

int main() {
    assertEqual(bf("Jupiter", "Makemake"), {});
    return 0;
}