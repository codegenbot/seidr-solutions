vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;

    int first_index = -1;
    int second_index = -1;
    for (int i = 0; i < planets.size(); ++i) {
        if (planets[i] == planet1) {
            first_index = i;
        }
        if (planets[i] == planet2) {
            second_index = i;
        }
    }

    if (first_index == -1 || second_index == -1) {
        return result;
    }

    if (first_index < second_index) {
        for (int i = first_index + 1; i < second_index; ++i) {
            result.push_back(planets[i]);
        }
    } else {
        for (int i = second_index + 1; i < first_index; ++i) {
            result.push_back(planets[i]);
        }
    }

    return result;
}