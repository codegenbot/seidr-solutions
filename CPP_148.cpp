vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
  vector<string> result;
  
  bool found1 = false, found2 = false;
  for (int i = 0; i < planets.size(); ++i) {
      if (planet1 == planets[i]) {
          found1 = true;
      } else if (planet2 == planets[i]) {
          found2 = true;
      }
      
      if (found1 && !found2) {
          result.push_back(planets[i]);
      } else if (found2 && !found1) {
          result.insert(result.begin(), planets[i]);
      }
  }
  
  if (result.size() == 1 || result.size() == 2) {
      result.clear();
  }
  
  return result;
}