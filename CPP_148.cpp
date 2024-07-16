vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;

    int p1 = -1, p2 = -1;
    for (int i = 0; i < planets.size(); ++i) {
        if (planet1 == planets[i]) {
            p1 = i;
        }
        if (planet2 == planets[i]) {
            p2 = i;
        }
    }

    if (p1 == -1 || p2 == -1) {
        return result;
    }

    int start = min(p1, p2) + 1;
    int end = max(p1, p2);

    for (int i = start; i < end; ++i) {
        result.push_back(planets[i]);
    }

    return result;
}