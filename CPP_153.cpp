#include <iostream>
#include <vector>
#include <string>

namespace std {
    ostream& operator<<(ostream& os, const vector<string>& vec) {
        for (const auto& s : vec) os << s;
        return os;
    }
}

int Strongest_Extension(string class_name,vector<string> extensions){
    int max_strength = 0;
    string strongest_extension;

    for (string extension : extensions) {
        int cap = 0;
        int sm = 0;
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
    assert(Strongest_Extension("Sp", {"671235", "Bb"}) == "Sp.671235");
    cout << Strongest_Extension("Sp", {"671235", "Bb"}) << endl;
    return 0;
}