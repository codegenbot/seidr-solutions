vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;
    
    if (find(planets.begin(), planets.end(), planet1) == planets.end() || find(planets.begin(), planets.end(), planet2) == planets.end()) {
        return {};
    }
    
    int startIdx = find(planets.begin(), planets.end(), planet1) - planets.begin();
    int endIdx = find(planets.begin(), planets.end(), planet2) - planets.begin();
    
    if (startIdx > endIdx) {
        swap(startIdx, endIdx);
    }
    
    for (int i = startIdx + 1; i < endIdx; ++i) {
        result.push_back(planets[i]);
    }
    
    return result;
}