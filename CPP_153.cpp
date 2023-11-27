#include <string>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

string Strongest_Extension(string class_name, vector<string> extensions) {
    string strongest_extension = extensions[0];
    int strongest_strength = count(strongest_extension.begin(), strongest_extension.end(), toupper(strongest_extension[0])) - count(strongest_extension.begin(), strongest_extension.end(), tolower(strongest_extension[0]));

    for (int i = 1; i < extensions.size(); i++) {
        int strength = count(extensions[i].begin(), extensions[i].end(), toupper(extensions[i][0])) - count(extensions[i].begin(), extensions[i].end(), tolower(extensions[i][0]));
        if (strength > strongest_strength) {
            strongest_extension = extensions[i];
            strongest_strength = strength;
        }
    }

    return class_name + "." + strongest_extension;
}

int main() {
    assert (Strongest_Extension("Sp", {"671235", "Bb"}) == "Sp.671235");

    return 0;
}