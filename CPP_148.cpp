vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;

    if (find(planets.begin(), planets.end(), planet1) == planets.end() || find(planets.begin(), planets.end(), planet2) == planets.end()) {
        return result;
    }

    int start = min(find(planets.begin(), planets.end(), planet1) - planets.begin(), find(planets.begin(), planets.end(), planet2) - planets.begin());
    int end = max(find(planets.begin(), planets.end(), planet1) - planets.begin(), find(planets.begin(), planets.end(), planet2) - planets.begin());

    for (int i = start + 1; i < end; ++i) {
        result.push_back(planets[i]);
    }

    return result;
}