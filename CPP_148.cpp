vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;
    
    int start_idx = -1;
    int end_idx = -1;
    
    for (int i = 0; i < planets.size(); i++) {
        if (planets[i] == planet1) {
            start_idx = i;
        } else if (planets[i] == planet2) {
            end_idx = i;
        }
    }
    
    if (start_idx == -1 || end_idx == -1) {
        return result;
    }
    
    if (start_idx < end_idx) {
        for (int i = start_idx + 1; i < end_idx; i++) {
            result.push_back(planets[i]);
        }
    } else {
        for (int i = start_idx - 1; i > end_idx; i--) {
            result.push_back(planets[i]);
        }
    }
    
    return result;
}