#include <iostream>
#include <string>
#include <vector>

using namespace std;

int Strongest_Extension(const string& class_name, const vector<string>& extensions) {
    int max_strength = 0;
    string strongest_extension;
    for (auto extension : extensions) {
        int strength = 0;
        for (char c : extension) {
            if (isupper(c)) {
                strength++;
            } else if (islower(c)) {
                strength--;
            }
        }
        if (strength > max_strength) {
            max_strength = strength;
            strongest_extension = extension;
        }
    }
    return strongest_extension;
}

int main() {
    const string class_name = "Sp";
    const vector<string> extensions = {"671235", "Bb"};
    const string expected_strongest_extension = "Sp.671235";
    const string actual_strongest_extension = Strongest_Extension(class_name, extensions);
    assert(actual_strongest_extension == expected_strongest_extension);
    return 0;
}