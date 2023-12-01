#include <string>
#include <vector>
#include <cassert>
#include <algorithm>

using namespace std;

namespace Solution {
    string Strongest_Extension(string class_name, vector<string> extensions) {
        string strongest_extension = extensions[0];
        int strongest_strength = count_if(strongest_extension.begin(), strongest_extension.end(), isupper) - count_if(strongest_extension.begin(), strongest_extension.end(), islower);
        
        for (int i = 1; i < extensions.size(); i++) {
            int strength = count_if(extensions[i].begin(), extensions[i].end(), isupper) - count_if(extensions[i].begin(), extensions[i].end(), islower);
            if (strength > strongest_strength) {
                strongest_extension = extensions[i];
                strongest_strength = strength;
            }
        }
        
        return class_name + "." + strongest_extension;
    }
}

int main() {
    assert(Solution::Strongest_Extension("Sp", {"671235", "Bb"}) == "Sp.671235");
    return 0;
}