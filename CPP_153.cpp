```cpp
#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

string Strongest_Extension(string class_name, vector<string> extensions);

int main() {
    string className;
    int numExtensions;
    cin >> className >> numExtensions;
    vector<string> extensions(numExtensions);
    for (int i = 0; i < numExtensions; i++) {
        cin >> extensions[i];
    }
    cout << Strongest_Extension(className, extensions) << endl;

    return 0;
}

string Strongest_Extension(string class_name, vector<string> extensions) {
    int strongest = 0;
    string strongest_extension;

    for (const auto& extension : extensions) {
        int cap = 0, sm = 0;
        for (char c : extension) {
            if (isupper(c)) cap++;
            else if (islower(c)) sm++;
        }
        int strength = cap - sm;
        if (strength > strongest || (strength == strongest && extension < strongest_extension)) {
            strongest = strength;
            strongest_extension = extension;
        }
    }

    return class_name + "." + strongest_extension;
}