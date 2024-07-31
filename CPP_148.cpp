#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    vector<string> planetList = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> planetsBetween = bf("Venus", "Mars");
    vector<string> expectedPlanets = {"Earth"};

    assert(issame(planetsBetween, expectedPlanets));

    return 0;
}