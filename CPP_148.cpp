Here is the completed code:

```cpp
vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;

    int idx1 = 0;
    int idx2 = 0;

    for (int i = 0; i < planets.size(); i++) {
        if (planets[i] == planet1) {
            idx1 = i;
        }
        else if (planets[i] == planet2) {
            idx2 = i;
        }
    }

    if (idx1 == 0 || idx2 == 0)
        return vector<string>();

    for (int i = idx1 + 1; i < idx2; i++) {
        result.push_back(planets[i]);
    }

    return result;
}