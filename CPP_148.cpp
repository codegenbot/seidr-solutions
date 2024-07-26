vector<string> bf(string planet1, string planet2){
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;
    
    int pos1 = -1, pos2 = -1;
    
    for(int i=0; i<8; i++){
        if(planet1 == planets[i]){
            pos1 = i;
        }
        if(planet2 == planets[i]){
            pos2 = i;
        }
    }

    if(pos1 == -1 || pos2 == -1){
        return result;
    }

    int start = min(pos1, pos2) + 1;
    int end = max(pos1, pos2);

    for(int i=start; i<end; i++){
        result.push_back(planets[i]);
    }

    return result;
}