#include <iostream>
#include <string>
#include <vector>

// Function to find strongest extension based on the strength score defined by problem statement rules.
int Strongest_Extension(string class_name,vector<string> extensions){
    int max_strength = 0;
    string strongest_extension;

    for (const auto &extension : extensions) {
        int cap = 0, sm = 0;
        for (char c : extension) {
            if (isupper(c)) cap++;
            else if (islower(c)) sm++;
        }
        int strength = cap - sm;
        if (strength > max_strength) {
            max_strength = strength;
            strongest_extension = extension;
        } 
    }

    return class_name + "." + strongest_extension;
}

int main() {
    std::string class_name = "Sp";
    vector<string> extensions = {"671235", "Bb"};
    int result = Strongest_Extension(class_name, extensions);
    std::cout << "Strongest Extension: " << result << std::endl;
    return 0;
}