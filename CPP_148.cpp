#include <vector>
#include <string>
using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return a.size() == b.size() && std::all_of(a.begin(), a.end(), [&](const string& s) { return std::find(b.begin(), b.end(), s) != b.end(); });
}

vector<string> bf(string planet1, string planet2) {
    vector<string> result;
    string planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    int i = 0;
    while (i < 8) {
        if (planet1 == planets[i]) {
            for (int j = i + 1; j < 8; j++) {
                if (planet2 == planets[j]) {
                    for (int k = i + 1; k < j; k++) {
                        result.push_back(planets[k]);
                    }
                    return result;
                }
            }
        }
        i++;
    }
    return {};
}