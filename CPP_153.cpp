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
    string strongest_extension = "";
    int max_strength = 0;

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
    string class_name;
    vector<string> extensions;

    cout << "Enter the class name: ";
    getline(cin, class_name);

    cout << "Enter a list of extensions (separated by commas): ";
    string str_extensions;
    getline(cin, str_extensions);
    vector<string> v_extensions;
    for (string ext : split(str_extensions, ",")) {
        v_extensions.push_back(ext);
    }

    cout << Strongest_Extension(class_name, v_extensions) << endl;

    return 0;
}

vector<string> split(const string& s, char c) {
    vector<string> v;
    string t;

    for (char ch : s) {
        if (ch == c) {
            v.push_back(t);
            t = "";
        } else {
            t += ch;
        }
    }

    v.push_back(t);

    return v;
}