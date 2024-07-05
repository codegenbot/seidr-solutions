#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <cctype>
#include <cassert>

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
    assert(Strongest_Extension("Sp", {"671235", "Bb"}) == "Sp.671235");
    cout << "Test passed!" << endl;
    return 0;
}