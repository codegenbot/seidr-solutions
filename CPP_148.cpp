string planet1, planet2;
    cin >> planet1 >> planet2;
    vector<string> result = issame(planet1, planet2);
    for (const string& planet : result) {
        cout << planet << " ";
    }