#include <iostream>
#include <vector>
#include <string>
using namespace std;

string Strongest_Extension(string class_name, vector<string> extensions) {
    string strongest_extension = "";
    int max_strength = INT_MIN;

    for (string extension : extensions) {
        int cap_count = 0;
        int sm_count = 0;

        for (char c : extension) {
            if (isupper(c)) {
                cap_count++;
            } else if (islower(c)) {
                sm_count++;
            }
        }

        int strength = cap_count - sm_count;

        if (strength > max_strength) {
            max_strength = strength;
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