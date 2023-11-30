vector<string> bf(string planet1,string planet2){
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;
    bool found1 = false;
    bool found2 = false;
    
    for (int i = 0; i < planets.size(); i++) {
        if (planets[i] == planet1) {
            found1 = true;
        }
        if (planets[i] == planet2) {
            found2 = true;
        }
        if (found1 && !found2) {
            result.push_back(planets[i]);
        }
        if (found2) {
            break;
        }
    }
    
    return result;
}