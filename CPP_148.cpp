vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;
    
    if(find(planets.begin(), planets.end(), planet1) == planets.end() || find(planets.begin(), planets.end(), planet2) == planets.end())
        return result;
    
    int start = min(distance(planets.begin(), find(planets.begin(), planets.end(), planet1)),
                    distance(planets.begin(), find(planets.begin(), planets.end(), planet2)));
    int end = max(distance(planets.begin(), find(planets.begin(), planets.end(), planet1)),
                  distance(planets.begin(), find(planets.begin(), planets.end(), planet2)));
    
    for(int i=start+1; i<end; i++){
        result.push_back(planets[i]);
    }
    
    return result;
}