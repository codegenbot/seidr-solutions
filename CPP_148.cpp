bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> bf(std::string planet1, std::string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    int index1 = -1;
    int index2 = -1;

    for (int i = 0; i < planets.size(); i++) {
        if (planet1 == planets[i]) {
            index1 = i;
        }
        else if (planet2 == planets[i]) {
            index2 = i;
        }
    }

    if (index1 == -1 || index2 == -1) {
        return {};
    }

    int start, end;

    if(index1 < index2)
        swap(start, end);
    else
        std::tie(std::swap(start, end));

    vector<string> result;
    for (int i = 0; i < planets.size(); i++) {
        if(i >= start && i <= end) {
            result.push_back(planets[i]);
        }
    }

    return result;
}