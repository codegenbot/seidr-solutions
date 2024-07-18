vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};

    int start = -1, end = -1;
    for (int i = 0; i < planets.size(); i++) {
        if (planets[i] == planet1) {
            start = i;
        }
        if (planets[i] == planet2) {
            end = i;
        }
    }

    if (start == -1 || end == -1 || start == end) {
        return {};
    }

    vector<string> result;
    int minIdx = min(start, end);
    int maxIdx = max(start, end);

    for (int i = minIdx + 1; i < maxIdx; i++) {
        result.push_back(planets[i]);
    }

    return result;
}