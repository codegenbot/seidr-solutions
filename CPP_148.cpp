vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    int i, j;
    for (i = 0; i < planets.size(); i++) {
        if (planet1 == planets[i]) break;
    }
    for (j = 0; j < planets.size(); j++) {
        if (planet2 == planets[j]) break;
    }
    vector<string> result;
    if (i >= planets.size() || j >= planets.size()) return result;
    int start = max(i, 0);
    int end = min(j, planets.size());
    for (int k = start; k < end; k++) {
        result.push_back(planets[k]);
    }
    return result;
}