vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;

    int startIndex = -1, endIndex = -1;
    for (int i = 0; i < planets.size(); ++i) {
        if (planets[i] == planet1) {
            startIndex = i;
        }
        if (planets[i] == planet2) {
            endIndex = i;
        }
    }

    if (startIndex == -1 || endIndex == -1) {
        return result;
    }

    if (startIndex > endIndex) {
        swap(startIndex, endIndex);
    }

    for (int i = startIndex + 1; i < endIndex; ++i) {
        result.push_back(planets[i]);
    }

    return result;
}