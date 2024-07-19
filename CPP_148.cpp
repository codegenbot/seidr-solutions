vector<string> bf(string planet1, string planet2){
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;
    int firstPos = -1, secondPos = -1;
    
    for(int i = 0; i < planets.size(); i++){
        if(planet1 == planets[i])
            firstPos = i;
        if(planet2 == planets[i])
            secondPos = i;
    }
    
    if(firstPos == -1 || secondPos == -1)
        return result;
    
    if(firstPos < secondPos){
        for(int i = firstPos + 1; i < secondPos; i++){
            result.push_back(planets[i]);
        }
    } else {
        for(int i = secondPos + 1; i < firstPos; i++){
            result.push_back(planets[i]);
        }
    }
    
    return result;
}