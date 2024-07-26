vector<string> bf(string planet1, string planet2){
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;

    int orbit1 = -1, orbit2 = -1;
    for (int i = 0; i < planets.size(); ++i) {
        if (planets[i] == planet1) {
            orbit1 = i;
        }
        if (planets[i] == planet2) {
            orbit2 = i;
        }
    }

    if (orbit1 == -1 || orbit2 == -1 || orbit1 == orbit2) {
        return result;
    }

    int start = min(orbit1, orbit2) + 1;
    int end = max(orbit1, orbit2);

    for (int i = start; i < end; ++i) {
        result.push_back(planets[i]);
    }

    return result;
}