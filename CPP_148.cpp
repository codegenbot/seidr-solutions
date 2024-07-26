vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;

    if (find(planets.begin(), planets.end(), planet1) == planets.end() || find(planets.begin(), planets.end(), planet2) == planets.end()) {
        return result;
    }

    int idx1 = find(planets.begin(), planets.end(), planet1) - planets.begin();
    int idx2 = find(planets.begin(), planets.end(), planet2) - planets.begin();

    if (idx1 > idx2) {
        swap(idx1, idx2);
    }

    for (int i = idx1 + 1; i < idx2; ++i) {
        result.push_back(planets[i]);
    }

    return result;
}