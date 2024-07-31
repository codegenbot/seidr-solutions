#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> bf(string planet1, string planet2);

int main() {
    string planet1, planet2;
    cin >> planet1 >> planet2;

    vector<string> result = bf(planet1, planet2);

    for (const auto& planet : result) {
        cout << planet << " ";
    }

    return 0;
}

vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;

    int idx1 = -1, idx2 = -1;
    for (int i = 0; i < planets.size(); ++i) {
        if (planet1 == planets[i]) {
            idx1 = i;
        }
        if (planet2 == planets[i]) {
            idx2 = i;
        }
    }

    if (idx1 == -1 || idx2 == -1) {
        return result;
    }

    int start = min(idx1, idx2) + 1;
    int end = max(idx1, idx2);

    for (int i = start; i < end; ++i) {
        result.push_back(planets[i]);
    }

    return result;
}