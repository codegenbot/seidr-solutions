#include <iostream>
#include <string>
#include <vector>

int Strongest_Extension(std::string class_name, std::vector<std::string> extensions){
    int strongest = 0;
    std::string strongest_ext = "";
    for(auto ext : extensions){
        int cap = 0, sm = 0;
        for(char c : ext){
            if(isupper(c)) cap++;
            else if(islower(c)) sm++;
        }
        int strength = cap - sm;
        if(strength > strongest || (strength == strongest && ext < strongest_ext)){
            strongest = strength;
            strongest_ext = ext;
        }
    }
    return class_name + "." + strongest_ext;
}

int main() {
    assert(Strongest_Extension("Sp", {"671235", "Bb"}) == "Sp.671235");
    std::cout << Strongest_Extension("Sp", {"671235", "Bb"}) << std::endl;
    return 0;
}