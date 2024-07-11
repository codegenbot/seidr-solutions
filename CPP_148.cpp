vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;
    
    auto it1 = find(planets.begin(), planets.end(), planet1);
    auto it2 = find(planets.begin(), planets.end(), planet2);
    
    if (it1 == planets.end() || it2 == planets.end()) {
        return result;
    }
    
    int index1 = distance(planets.begin(), it1);
    int index2 = distance(planets.begin(), it2);
    
    int start = min(index1, index2);
    int end = max(index1, index2);
    
    for (int i = start + 1; i < end; i++) {
        result.push_back(planets[i]);
    }
    
    return result;
}