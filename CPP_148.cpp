vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;

    int idx1 = -1, idx2 = -1;
    for (int i = 0; i < planets.size(); ++i) {
        if (planets[i] == planet1) {
            idx1 = i;
        }
        if (planets[i] == planet2) {
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