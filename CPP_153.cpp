#include <iostream>
#include <string>
#include <vector>

int main() {
    string class_name;
    vector<string> extensions;

    // Read input from user
    cin >> class_name;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string extension;
        cin >> extension;
        extensions.push_back(extension);
    }

    int strongest_strength = 0;
    string strongest_extension;

    for (const auto& extension : extensions) {
        int cap = count(extension.begin(), extension.end(), toupper);
        int sm = extension.size() - cap;
        double strength = static_cast<double>(cap) - sm;

        if (strength > strongest_strength) {
            strongest_strength = strength;
            strongest_extension = extension;
        }
    }

    cout << class_name + "." + strongest_extension << endl;

    return 0;
}