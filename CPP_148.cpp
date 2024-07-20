vector<string> all_planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;

    int start_idx = -1, end_idx = -1;
    for (int i = 0; i < all_planets.size(); ++i) {
        if (all_planets[i] == planet1) {
            start_idx = i;
        } else if (all_planets[i] == planet2) {
            end_idx = i;
        }
    }

    if (start_idx == -1 || end_idx == -1) {
        return result;
    }

    if (start_idx < end_idx) {
        for (int i = start_idx + 1; i < end_idx; ++i) {
            result.push_back(all_planets[i]);
        }
    } else {
        for (int i = start_idx - 1; i > end_idx; --i) {
            result.push_back(all_planets[i]);
        }
    }

    return result;
}