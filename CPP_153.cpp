```cpp
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int calculateStrength(string extension) {
    int cap = 0, sm = 0;
    for (char c : extension) {
        if (isupper(c)) cap++;
        else if (islower(c)) sm++;
    }
    return cap - sm;
}

string Strongest_Extension(string class_name, vector<string> extensions) {
    int max_strength = -1;
    string strongest_extension;

    for (const auto& extension : extensions) {
        int strength = calculateStrength(extension);
        if (strength > max_strength) {
            max_strength = strength;
            strongest_extension = extension;
        } else if (strength == max_strength) {
            strongest_extension = extension;
        }
    }

    return class_name + "." + strongest_extension;
}

int main() {
    vector<string> extensions = {"Java", "Python", "Kotlin", "Swift"};
    string className = "Programming";
    cout << Strongest_Extension(className, extensions);
    return 0;
}