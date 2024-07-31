vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;
    bool valid_input = false;
    
    for (int i = 0; i < planets.size(); ++i) {
        if (planets[i] == planet1 || planets[i] == planet2) {
            valid_input = true;
        }
        if (valid_input) {
            if (planets[i] != planet1 && planets[i] != planet2) {
              result.push_back(planets[i]);
            }
            if (planets[i] == planet2) {
                break;
            }
        }
    }
    
    return result;
}