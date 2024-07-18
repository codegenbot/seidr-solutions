#include <iostream>
#include <cctype>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

string Strongest_Extension(string class_name, vector<string> extensions) {
    int CAP, SM, max_strength = -1;
    string strongest_extension = "";
    for (string ext : extensions) {
        CAP = SM = 0;
        for (char c : ext) {
            if (isupper(c)) CAP++;
            else if (islower(c)) SM++;
        }
        int strength = CAP - SM;
        if (strength > max_strength || (strength == max_strength && ext < strongest_extension)) {
            max_strength = strength;
            strongest_extension = ext;
        }
    }
    return class_name + "." + strongest_extension;
}

int main() {
    assert(Strongest_Extension("Sp", {"671235", "Bb"}) == "Sp.671235");
    return 0;
}