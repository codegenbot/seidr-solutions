#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>
using namespace std;

string Strongest_Extension(string class_name, vector<string> extensions) {
    string strongest_extension = "";
    int max_strength = INT_MIN;

    for (const string& ext : extensions) {
        int cap_count = count_if(ext.begin(), ext.end(), ::isupper);
        int sm_count = count_if(ext.begin(), ext.end(), ::islower);

        int strength = cap_count - sm_count;
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