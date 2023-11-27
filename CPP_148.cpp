vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;

    int index1 = -1;
    int index2 = -1;

    // Find the index of planet1 and planet2
    for (int i = 0; i < planets.size(); i++) {
        if (planet1 == planets[i]) {
            index1 = i;
        }
        if (planet2 == planets[i]) {
            index2 = i;
        }
    }

    // Check if planet1 and planet2 are valid planet names
    if (index1 == -1 || index2 == -1) {
        return result;
    }

    // Sort the planets between planet1 and planet2
    if (index1 < index2) {
        for (int i = index1 + 1; i < index2; i++) {
            result.push_back(planets[i]);
        }
    } else {
        for (int i = index2 + 1; i < index1; i++) {
            result.push_back(planets[i]);
        }
    }

    return result;
}