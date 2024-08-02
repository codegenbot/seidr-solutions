#include <string>
#include <vector>
#include <cassert>
#include <climits>
#include <cctype>

using namespace std;

string Strongest_Extension(string class_name, vector<string> extensions){
    int max_strength = INT_MIN;
    string strongest_extension = "";

    for(const auto& ext : extensions){
        int CAP = 0, SM = 0;
        for(const auto& c : ext){
            if(isupper(c)) CAP++;
            if(islower(c)) SM++;
        }
        int strength = CAP - SM;
        if(strength > max_strength || (strength == max_strength && ext < strongest_extension)){
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