vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;
    
    if (find(planets.begin(), planets.end(), planet1) == planets.end() || find(planets.begin(), planets.end(), planet2) == planets.end()) {
        return result;
    }
    
    int start = find(planets.begin(), planets.end(), planet1) - planets.begin();
    int end = find(planets.begin(), planets.end(), planet2) - planets.begin();
    
    if (start > end) {
        swap(start, end);
    }
    
    for (int i = start + 1; i < end; ++i) {
        result.push_back(planets[i]);
    }
    
    return result;
}