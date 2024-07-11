vector<string> bf(string planet1, string planet2) {
    vector<string> solarSystem = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;

    int idx1 = -1, idx2 = -1;
    for (int i = 0; i < solarSystem.size(); i++) {
        if (solarSystem[i] == planet1) {
            idx1 = i;
        }
        if (solarSystem[i] == planet2) {
            idx2 = i;
        }
    }

    if (idx1 == -1 || idx2 == -1) {
        return {};
    }

    int startIdx = min(idx1, idx2);
    int endIdx = max(idx1, idx2);

    for (int i = startIdx + 1; i < endIdx; i++) {
        result.push_back(solarSystem[i]);
    }

    return result;
}