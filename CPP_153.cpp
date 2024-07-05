#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <cassert>

using namespace std;

string Strongest_Extension(string class_name, vector<string> extensions) {
    string strongest_extension = "";
    int max_strength = INT_MIN;

    for (const string& ext : extensions) {
        int CAP = 0, SM = 0;
        for (char ch : ext) {
            if (isupper(ch)) CAP++;
            if (islower(ch)) SM++;
        }
        int strength = CAP - SM;
        if (strength > max_strength) {
            max_strength = strength;
            strongest_extension = ext;
        }
    }

    return class_name + "." + strongest_extension;
}

int main() {
    assert(Strongest_Extension("Sp", {"671235", "Bb"}) == "Sp.Bb");
    return 0;
}