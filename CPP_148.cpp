vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    int index1 = 0;
    int index2 = 0;

    for (int i = 0; i < planets.size(); i++) {
        if (planet1 == planets[i]) {
            index1 = i;
        }
        else if (planet2 == planets[i]) {
            index2 = i;
        }
    }

    if (index1 == 0 || index2 == 0) {
        return {};
    }

    vector<string> result;

    for (int i = index1 + 1; i < index2; i++) {
        result.push_back(planets[i]);
    }

    return result;
}