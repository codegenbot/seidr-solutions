#include<vector>
#include<string>
#include<algorithm>

vector<string> bf(string planet1, string planet2){
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string>::iterator it1 = find(planets.begin(), planets.end(), planet1);
    vector<string>::iterator it2 = find(planets.begin(), planets.end(), planet2);

    if(it1 == planets.end() || it2 == planets.end()){
        return {};
    }

    int minIdx = min(it1 - planets.begin(), it2 - planets.begin());
    int maxIdx = max(it1 - planets.begin(), it2 - planets.begin());

    vector<string> result;
    for(int i = minIdx + 1; i < maxIdx; ++i){
        result.push_back(planets[i]);
    }

    return result;
}