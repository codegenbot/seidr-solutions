#include <iostream>
#include <vector>
#include <string>
using namespace std;

string Strongest_Extension(string class_name, vector<string> extensions) {
    string strongest_extension = extensions[0];
    int strongest_strength = count_if(strongest_extension.begin(), strongest_extension.end(), [](char c) { return isupper(c); })
                            - count_if(strongest_extension.begin(), strongest_extension.end(), [](char c) { return islower(c); });

    for (int i = 1; i < extensions.size(); i++) {
        string extension = extensions[i];
        int strength = count_if(extension.begin(), extension.end(), [](char c) { return isupper(c); })
                       - count_if(extension.begin(), extension.end(), [](char c) { return islower(c); });

        if (strength > strongest_strength) {
            strongest_extension = extension;
            strongest_strength = strength;
        }
    }

    return class_name + "." + strongest_extension;
}

int main() {
    string class_name;
    vector<string> extensions;

    cout << "Enter the class name: ";
    cin >> class_name;

    int num_extensions;
    cout << "Enter the number of extensions: ";
    cin >> num_extensions;

    cout << "Enter the extensions: ";
    for (int i = 0; i < num_extensions; i++) {
        string extension;
        cin >> extension;
        extensions.push_back(extension);
    }

    string result = Strongest_Extension(class_name, extensions);
    cout << "Result: " << result << endl;

    return 0;
}