vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    
    if (find(planets.begin(), planets.end(), planet1) == planets.end() || 
        find(planets.begin(), planets.end(), planet2) == planets.end()) {
        return {};
    }
    
    int index1 = distance(planets.begin(), find(planets.begin(), planets.end(), planet1));
    int index2 = distance(planets.begin(), find(planets.begin(), planets.end(), planet2));
    
    if (index1 > index2) swap(index1, index2);
    
    vector<string> result;
    for (int i = max(0, index1 - 1); i <= min(index2 + 1, planets.size() - 1); i++) {
        if (planets[i] != planet1 && planets[i] != planet2) {
            result.push_back(planets[i]);
        }
    }
    
    return result;
}