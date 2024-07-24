vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    int index1 = -1;
    int index2 = -1;

    for (int i = 0; i < planets.size(); ++i) {
        if (planets[i] == planet1) {
            index1 = i;
        }
        if (planets[i] == planet2) {
            index2 = i;
        }
    }

    if (index1 == -1 || index2 == -1)
        return vector<string>();

    vector<string> result;

    for (int i = 0; i < planets.size(); ++i) {
        int j = max(0, min(index1 - 1, index2));
        while (j != index1 && j <= index2) {
            if (planets[j] == planet1 || planets[j] == planet2)
                break;
            result.push_back(planets[j]);
            ++j;
        }
    }

    return result;
}