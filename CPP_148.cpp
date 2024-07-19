vector<string> bf(string planet1, string planet2) {
    vector<string> planets{"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;

    int startIdx = -1, endIdx = -1;
    for (int i = 0; i < planets.size(); ++i) {
        if (planets[i] == planet1) {
            startIdx = i;
        }
        if (planets[i] == planet2) {
            endIdx = i;
        }
    }

    if (startIdx == -1 || endIdx == -1) {
        return result;
    }

    if (startIdx > endIdx) {
        swap(startIdx, endIdx);
    }

    for (int i = startIdx + 1; i < endIdx; ++i) {
        result.push_back(planets[i]);
    }

    return result;
}