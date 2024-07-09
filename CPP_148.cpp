Here is the completed code:

vector<string> bf(string planet1, string planet2) {
    vector<string> result;
    string planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    int i = 0;
    while (i < 8) {
        if (planet1 == planets[i]) {
            for (int j = i + 1; j < 8; j++) {
                if (planet2 == planets[j]) {
                    for (int k = i + 1; k < j; k++) {
                        result.push_back(planets[k]);
                    }
                    return result;
                }
            }
        }
        i++;
    }
    return {};
}