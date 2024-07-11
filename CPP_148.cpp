vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;

    int range_start = -1, range_end = -1;
    for (int i = 0; i < planets.size(); ++i) {
        if (planets[i] == planet1) {
            range_start = i;
        }
        if (planets[i] == planet2) {
            range_end = i;
        }
    }

    if (range_start == -1 || range_end == -1) {
        return result;
    }

    if (range_start > range_end) {
        swap(range_start, range_end);
    }

    for (int i = range_start + 1; i < range_end; ++i) {
        result.push_back(planets[i]);
    }

    return result;
}