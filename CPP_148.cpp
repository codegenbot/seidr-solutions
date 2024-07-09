vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;

    if (find(planets.begin(), planets.end(), planet1) == planets.end() || find(planets.begin(), planets.end(), planet2) == planets.end())
        return result;

    auto it1 = find(planets.begin(), planets.end(), planet1);
    auto it2 = find(planets.begin(), planets.end(), planet2);

    if (it1 > it2)
        swap(it1, it2);

    for (auto it = it1 + 1; it != it2; ++it)
        result.push_back(*it);

    return result;
}