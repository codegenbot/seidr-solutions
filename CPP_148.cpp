vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;
    bool found1 = false, found2 = false;
    for (const auto& planet : planets) {
        if (planet == planet1 || planet == planet2) {
            if (!found1) {
                found1 = true;
            } else {
                found2 = true;
            }
        }
        if (found1 && !found2) {
            result.push_back(planet);
        }
    }
    if (result.size() < 2) {
        result.clear();
    }
    return result;
}