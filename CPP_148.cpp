string planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;
    bool found1 = false, found2 = false;
    int start = -1, end = -1;
    for (int i = 0; i < 8; i++) {
        if (planet1 == planets[i]) {
            found1 = true;
            start = i;
        }
        if (planet2 == planets[i]) {
            found2 = true;
            end = i;
        }
    }
    if (!found1 || !found2) {
        return result;
    }
    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }
    for (int i = start + 1; i < end; i++) {
        result.push_back(planets[i]);
    }
    return result;
}