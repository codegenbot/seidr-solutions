Here is the completed code:

vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;

    int index1 = -1;
    int index2 = -1;

    for (int i = 0; i < planets.size(); i++) {
        if (planets[i] == planet1) {
            index1 = i;
        } else if (planets[i] == planet2) {
            index2 = i;
        }
    }

    if (index1 == -1 || index2 == -1)
        return vector<string>();

    for (int i = 0; i < planets.size(); i++) {
        if (i >= index1 && i <= index2)
            result.push_back(planets[i]);
    }

    sort(result.begin(), result.end(), [](const string& a, const string& b) {
        int posA = -1;
        int posB = -1;

        for (int i = 0; i < planets.size(); i++) {
            if (planets[i] == a)
                posA = i;
            else if (planets[i] == b)
                posB = i;
        }

        return posA < posB;
    });

    return result;
}