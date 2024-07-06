vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    int index1 = -1, index2 = -1;
    
    for (int i = 0; i < planets.size(); i++) {
        if (planet1 == planets[i]) {
            index1 = i;
        } else if (planet2 == planets[i]) {
            index2 = i;
        }
    }
    
    if (index1 == -1 || index2 == -1)
        return {};
    
    vector<string> result;
    for (int i = 0; i < index1; i++) {
        if (i >= index2) break;
        result.push_back(planets[i]);
    }
    for (int i = index2 + 1; i <= index1; i++) {
        result.push_back(planets[i]);
    }
    
    return result;
}