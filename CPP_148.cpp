vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};

    int idx1 = -1, idx2 = -1;
    for (int i = 0; i < planets.size(); ++i) {
        if (planets[i] == planet1) {
            idx1 = i;
        } else if (planets[i] == planet2) {
            idx2 = i;
        }
    }

    if (idx1 == -1 || idx2 == -1) {
        return {};
    }

    vector<string> result;
    int startIdx = min(idx1, idx2) + 1;
    int endIdx = max(idx1, idx2);

    for (int i = startIdx; i < endIdx; ++i) {
        result.push_back(planets[i]);
    }

    return result;
}