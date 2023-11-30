vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;

    // Check if planet1 and planet2 are valid planet names
    bool validPlanet1 = false;
    bool validPlanet2 = false;
    for (string planet : planets) {
        if (planet == planet1) {
            validPlanet1 = true;
        }
        if (planet == planet2) {
            validPlanet2 = true;
        }
    }

    // If planet1 or planet2 are not valid planet names, return empty vector
    if (!validPlanet1 || !validPlanet2) {
        return result;
    }

    // Find the index of planet1 and planet2 in the planets vector
    int index1 = -1;
    int index2 = -1;
    for (int i = 0; i < planets.size(); i++) {
        if (planets[i] == planet1) {
            index1 = i;
        }
        if (planets[i] == planet2) {
            index2 = i;
        }
    }

    // If planet1 is located after planet2 in the planets vector, swap their indices
    if (index1 > index2) {
        swap(index1, index2);
    }

    // Add all planets between planet1 and planet2 to the result vector
    for (int i = index1 + 1; i < index2; i++) {
        result.push_back(planets[i]);
    }

    return result;
}