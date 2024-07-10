#include <iostream>
#include <vector>
#include <string>
#include <cctype>

int Strongest_Extension(std::string class_name, std::vector<std::string> extensions){
    int strongest = -1;
    std::string strongest_ext;
    for(auto ext : extensions){
        int cap = 0, sm = 0;
        for(char c : ext){
            if(std::isupper(c)) cap++;
            else if(std::islower(c)) sm++;
        }
        int strength = cap - sm;
        if(strength > strongest){
            strongest = strength;
            strongest_ext = ext;
        }else if(strength == strongest){
            strongest_ext = ext;
        }
    }
    return class_name + "." + strongest_ext;
}

int main() {
    assert(Strongest_Extension("Sp", {"671235", "Bb"}) == "Sp.671235");
    // more code
    return 0;
}