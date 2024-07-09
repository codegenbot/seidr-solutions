vector<string> bf(string planet1, string planet2) {
    vector<string> result;

    string planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};

    int index1 = -1;
    int index2 = -1;

    for (int i = 0; i < 8; i++) {
        if (planets[i] == planet1) {
            index1 = i;
        }
        else if (planets[i] == planet2) {
            index2 = i;
        }

        if (index1 != -1 && index2 != -1)
            break;
    }

    if (index1 == -1 || index2 == -1) {
        return result;
    }

    for (int i = 0; i < 8; i++) {
        if (i >= index1 && i <= index2) {
            result.push_back(planets[i]);
        }
    }

    sort(result.begin(), result.end());

    return result;
}