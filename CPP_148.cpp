bool issame(string planet1, string planet2) {
    return planet1 == planet2;
}

vector<string> bf(string planet1, string planet2);

int main() {
    string start, end;
    cin >> start >> end;
    
    if (issame(start, end)) {
        cout << "Cannot select the same planet." << endl;
        return 0;
    }

    vector<string> result = bf(start, end);
    
    if (result.empty()) {
        cout << "Invalid planets selected." << endl;
    } else {
        cout << "Planets between " << start << " and " << end << ":" << endl;
        for (const string& planet : result) {
            cout << planet << endl;
        }
    }

    return 0;
}

vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;

    int start = -1, end = -1;
    for (int i = 0; i < planets.size(); ++i) {
        if (planets[i] == planet1) {
            start = i;
        }
        if (planets[i] == planet2) {
            end = i;
        }
    }

    if (start == -1 || end == -1) {
        return result;
    }

    if (start > end) {
        swap(start, end);
    }

    for (int i = start + 1; i < end; ++i) {
        result.push_back(planets[i]);
    }

    return result;
}