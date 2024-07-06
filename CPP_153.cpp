```cpp
#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

string Strongest_Extension(string class_name, vector<string> extensions);

int main() {
    string class_name;
    vector<string> extensions;

    cout << "Enter the class name: ";
    cin >> class_name;

    cout << "Enter the list of extensions (space separated): ";
    string temp;
    getline(cin, temp);
    size_t pos = 0;
    while ((pos = temp.find(" ")) != string::npos) {
        string extension = temp.substr(0, pos);
        extensions.push_back(extension);
        temp.erase(0, pos + 1);
    }
    if (!temp.empty()) {
        extensions.push_back(temp);
    }

    cout << "Strongest Extension: " << Strongest_Extension(class_name, extensions) << endl;

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