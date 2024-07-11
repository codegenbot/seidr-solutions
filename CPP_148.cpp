vector<string> bf(string planet1, string planet2){
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;

    if(std::find(planets.begin(), planets.end(), planet1) != planets.end() && std::find(planets.begin(), planets.end(), planet2) != planets.end()){
        int start_index = std::distance(planets.begin(), std::find(planets.begin(), planets.end(), planet1));
        int end_index = std::distance(planets.begin(), std::find(planets.begin(), planets.end(), planet2));
        
        int min_index = min(start_index, end_index);
        int max_index = max(start_index, end_index);

        for(int i = min_index + 1; i < max_index; ++i){
            result.push_back(planets[i]);
        }
    }

    return result;
}