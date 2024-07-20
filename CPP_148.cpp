vector<string> bf(string planet1, string planet2){
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

    if (p1 < p2) {
        for (int i = p1 + 1; i < p2; ++i) {
            result.push_back(planets[i]);
        }
    } else {
        for (int i = p1 - 1; i > p2; --i) {
            result.push_back(planets[i]);
        }
    }

    return result;
}