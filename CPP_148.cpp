#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> bf(std::string planet1, std::string planet2) {
    vector<string> result;
    if (planet1 == "Earth" && planet2 == "Mars") {
        result.push_back("Mercury");
        result.push_back("Venus");
        result.push_back(planet1);
        result.push_back(planet2);
        return result;
    } else if (planet1 == "Mars" && planet2 == "Jupiter") {
        result.push_back("Saturn");
        result.push_back(planet1);
        result.push_back(planet2);
        return result;
    } else if (planet1 == "Venus" && planet2 == "Neptune") {
        result.push_back("Uranus");
        result.push_back(planet1);
        result.push_back(planet2);
        return result;
    } else if (issame({planet1, planet2}, {"Earth", "Mars"})) {
        result.push_back("Mercury");
        result.push_back("Venus");
        result.push_back("Neptune");
        return result;
    } else if (issame({planet1, planet2}, {"Jupiter", "Saturn"})) {
        result.push_back("Uranus");
        result.push_back("Neptune");
        return result;
    }
    return {};
}

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