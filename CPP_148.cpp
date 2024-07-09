#include <vector>
#include <string>

bool isPlanet(string planet);
bool issame(vector<string> a, vector<string> b);
vector<string> mybf(string planet1, string planet2);

bool main() {
    cout << "Enter two planets separated by space: ";
    string planet1, planet2;
    cin >> planet1 >> planet2;
    vector<string> result = mybf(planet1, planet2); 
    if (result.empty()) {
        cout << "Planets not found.\n";
    } else {
        cout << "Planets in order are: ";
        for (const string& planet : result) {
            cout << planet << " ";
        }
        cout << "\n";

        vector<string> b = vector<string>(1,planet1);
        b.push_back(planet2);
        if(issame(result,b)){
            cout << "The planets are the same.\n";
        } else {
            cout << "The planets are different.\n";
        }
    }

    return !result.empty();
}

bool isPlanet(string planet) {
    string planets[] = {"Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    for (const string& p : planets) {
        if (p == planet)
            return true;
    }
    return false;
}

bool issame(vector<string> a, vector<string> b) { 
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<string> mybf(string planet1, string planet2) { 
    vector<string> result;
    if (isPlanet(planet1) && isPlanet(planet2)) {
        if (planet1 < planet2)
            result.push_back(planet1);
        else
            result.push_back(planet2);
    }
    return result;

}