vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;

    if (find(planets.begin(), planets.end(), planet1) == planets.end() || find(planets.begin(), planets.end(), planet2) == planets.end()) {
        return result;
    }

    auto begin = min(find(planets.begin(), planets.end(), planet1), find(planets.begin(), planets.end(), planet2));
    auto end = max(find(planets.begin(), planets.end(), planet1), find(planets.begin(), planets.end(), planet2));

    for (auto it = begin + 1; it != end; ++it) {
        result.push_back(*it);
    }

    return result;
}