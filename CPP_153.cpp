```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int Strongest_Extension(string class_name, vector<string> extensions) {
    int strongest = -1;
    string strongest_extension;
    for (auto &extension : extensions) {
        int cap = 0, sm = 0;
        for (char c : extension) {
            if (isupper(c)) cap++;
            else if (islower(c)) sm++;
        }
        int strength = cap - sm;
        if (strength > strongest) {
            strongest = strength;
            strongest_extension = extension;
        } 
    }
    return class_name + "." + strongest_extension;
}

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
        extensions.push_back(temp.substr(0, pos));
        temp.erase(0, pos + 1);
    }
    extensions.push_back(temp);

    cout << "Strongest extension for the class " << Strongest_Extension(class_name, extensions) << endl;

    return 0;
}