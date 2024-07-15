vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;
    int start = -1, end = -1;
    
    for(int i = 0; i < planets.size(); i++) {
        if (planet1 == planets[i]) {
            start = i;
        }
        if (planet2 == planets[i]) {
            end = i;
        }
    }
    
    if (start == -1 || end == -1) {
        return {};
    }
    
    if (start < end) {
        for(int i = start + 1; i < end; i++) {
            result.push_back(planets[i]);
        }
    } else {
        for(int i = end + 1; i < start; i++) {
            result.push_back(planets[i]);
        }
    }
    
    return result;
}