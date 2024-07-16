#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <climits>
#include <cassert>

using namespace std;

string Strongest_Extension(string class_name, vector<string> extensions){
    string strongest_extension = "";
    int max_strength = INT_MIN;

    for (string extension : extensions) {
        int CAP = 0, SM = 0;
        for (char c : extension) {
            if (isupper(c)) CAP++;
            else if (islower(c)) SM++;
        }
        int strength = CAP - SM;
        if (strength > max_strength || (strength == max_strength && strongest_extension.empty())) {
            max_strength = strength;
            strongest_extension = extension;
        }
    }

    return class_name + "." + strongest_extension;
}

int main() {
    assert(Strongest_Extension("Sp", {"671235", "Bb"}) == "Sp.671235");
    return 0;
}