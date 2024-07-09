vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    
    bool issame(int i1, int i2) {
        return i1 == i2;
    }
    
    int index1 = -1, index2 = -1;
    
    for (int i = 0; i < planets.size(); i++) {
        if (planets[i] == planet1) {
            index1 = i;
        } else if (planets[i] == planet2) {
            index2 = i;
        }
        
        if (index1 != -1 && index2 != -1)
            break;
    }
    
    if (index1 == -1 || index2 == -1)
        return vector<string>();
    
    int start = min(index1, index2);
    int end = max(index1, index2);
    
    vector<string> result;
    for (int i = 0; i < planets.size(); i++) {
        if (issame(i, start) || issame(i, end)) continue;
        if (i >= start && i <= end)
            continue;
        for (int j = i + 1; j < planets.size(); j++) {
            if (planets[j] == planet2)
                break;
            result.push_back(planets[j]);
        }
    }
    
    return result;
}