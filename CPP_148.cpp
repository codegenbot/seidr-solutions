int main() {
    cout << "Enter two planets separated by space: ";
    string planet1, planet2;
    cin >> planet1 >> planet2;
    vector<string> result = bf(planet1, planet2);
    if (result.empty()) {
        cout << "Planets not found.\n";
    } else {
        cout << "Planets in order are: ";
        for (const string& planet : result) {
            cout << planet << " ";
        }
        cout << "\n";
    }
    return 0;
}