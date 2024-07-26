vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;
    bool found1 = false, found2 = false;

    for (const string& planet : planets) {
        if (planet == planet1)
            found1 = true;
        if (found1 && !found2)
            result.push_back(planet);
        if (planet == planet2)
            found2 = true;
    }
    
    if (!found1 || !found2)
        return {};
    
    result.pop_back(); // Removing planet2 from the result
    
    return result;
}