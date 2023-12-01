#include <iostream>
#include <vector>
#include <string>
#include <climits>

using namespace std;

string Strongest_Extension(string class_name, vector<string> extensions);

int main() {
    assert (Strongest_Extension("Sp", {"671235", "Bb"}) == "Sp.671235");
    return 0;
}

string Strongest_Extension(string class_name, vector<string> extensions) {
    string strongest_extension = "";
    int max_strength = INT_MIN;
    
    for (string extension : extensions) {
        int cap_letters = 0;
        int sm_letters = 0;
        
        for (char c : extension) {
            if (isupper(c)) {
                cap_letters++;
            } else if (islower(c)) {
                sm_letters++;
            }
        }
        
        int strength = cap_letters - sm_letters;
        if (strength > max_strength) {
            max_strength = strength;
            strongest_extension = extension;
        }
    }
    
    return class_name + "." + strongest_extension;
}