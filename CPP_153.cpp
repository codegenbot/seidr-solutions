```cpp
#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

string Strongest_Extension(string class_name, vector<string> extensions);

int main() {
    string className;
    vector<string> extensions;
    
    cout << "Enter the name of the class: ";
    cin >> className;
    
    cout << "Enter the list of extensions (space separated): ";
    string input;
    getline(cin, input);
    size_t pos = 0;
    while ((pos = input.find(" ")) != string::npos) {
        extensions.push_back(input.substr(0, pos));
        input.erase(0, pos + 1);
    }
    if (!input.empty()) {
        extensions.push_back(input);
    }

    cout << "The strongest extension for the class '" << className << "' is: " << Strongest_Extension(className, extensions) << endl;

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