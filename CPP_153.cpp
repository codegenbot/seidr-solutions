#include <iostream>
#include <vector>
#include <string>
#include <climits>

using namespace std;

string Strongest_Extension(const string& class_name, const vector<string>& extensions) {
    string strongest_extension = "";
    int max_strength = INT_MIN;

    for (const string& ext : extensions) {
        int cap = 0, sm = 0;
        for (char ch : ext) {
            if (isupper(ch)) cap++;
            else if (islower(ch)) sm++;
        }
        int strength = cap - sm;
        if (strength > max_strength) {
            max_strength = strength;
            strongest_extension = ext;
        }
    }

    return class_name + "." + strongest_extension;
}

int main() {
    cout << Strongest_Extension("Sp", {"671235", "Bb"}) << endl; // This should output "Sp.Bb"
    return 0;
}