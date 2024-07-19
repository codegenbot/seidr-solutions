vector<string> bf(string planet1, string planet2) {
    vector<string> result;

    string planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};

    int index1 = -1;
    for (int i = 0; i < 8; ++i) {
        if (planets[i] == planet1) {
            index1 = i;
            break;
        }
    }

    int index2 = -1;
    for (int i = 0; i < 8; ++i) {
        if (planets[i] == planet2) {
            index2 = i;
            break;
        }
    }

    if (index1 == -1 || index2 == -1)
        return vector<string>();

    int start = min(index1, index2);
    int end = max(index1, index2);

    for (int i = 0; i < 8; ++i) {
        if (start <= i && i <= end) {
            result.push_back(planets[i]);
        }
    }

    return result;
}