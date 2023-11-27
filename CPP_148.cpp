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
    
    // If planet1 or planet2 are not correct planet names, return empty vector
    if (!validPlanet1 || !validPlanet2) {
        return result;
    }
    
    // Find index of planet1 and planet2 in the planet vector
    int index1 = 0;
    int index2 = 0;
    for (int i = 0; i < planets.size(); i++) {
        if (planets[i] == planet1) {
            index1 = i;
        }
        if (planets[i] == planet2) {
            index2 = i;
        }
    }
    
    // If planet1 is after planet2, swap their indexes
    if (index1 > index2) {
        int temp = index1;
        index1 = index2;
        index2 = temp;
    }
    
    // Add planets between the orbits of planet1 and planet2 to the result vector
    for (int i = index1 + 1; i < index2; i++) {
        result.push_back(planets[i]);
    }
    
    return result;
}