Here is the completed code:

```cpp
vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    int index1 = -1, index2 = -1;

    for (int i = 0; i < planets.size(); i++) {
        if (planets[i] == planet1) {
            index1 = i;
        } else if (planets[i] == planet2) {
            index2 = i;
        }
    }

    if (index1 == -1 || index2 == -1)
        return {};

    int start = 0, end = planets.size() - 1;

    if (index1 < index2) {
        swap(start, end);
    }

    for (int i = start; i <= end; i++) {
        for (int j = start; j <= end; j++) {
            if (planets[i] != planet1 && planets[i] != planet2) {
                if (index1 < index2 ? i > index1 && i < index2 : i < index1 || i > index2) {
                    return {planets[i]};
                }
            }
        }
    }

    vector<string> result;

    for (int i = start; i <= end; i++) {
        if (planets[i] != planet1 && planets[i] != planet2) {
            bool ok = true;
            for (int j = start; j <= end; j++) {
                if (i != j && planets[j] < planets[i]) {
                    ok = false;
                    break;
                }
            }
            if (ok) {
                result.push_back(planets[i]);
            }
        }
    }

    return result;
}