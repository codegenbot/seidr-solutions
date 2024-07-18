bool issame(string planet1, string planet2) {
    return planet1 == planet2;
}

vector<string> bf(string planet1, string planet2);

int main() {
    string planet1, planet2;
    cin >> planet1 >> planet2;

    vector<string> result = bf(planet1, planet2);

    for (string planet : result) {
        cout << planet << " ";
    }

    return 0;
}

vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;

    int start = -1, end = -1;
    for (int i = 0; i < planets.size(); ++i) {
        if (issame(planets[i], planet1)) {
            start = i;
        }
        if (issame(planets[i], planet2)) {
            end = i;
        }
    }

    if (start == -1 || end == -1) {
        return result;
    }

    if (start > end) {
        swap(start, end);
    }

    for (int i = start + 1; i < end; ++i) {
        result.push_back(planets[i]);
    }

    return result;
}