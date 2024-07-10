#include <vector>
#include <string>
#include <algorithm>

int Strongest_Extension(std::string class_name, std::vector<std::string> extensions){
    int strongest_strength = 0;
    std::string strongest_extension;

    for(auto extension : extensions){
        int cap = 0;
        int sm = 0;
        for(char c : extension){
            if(isupper(c))
                cap++;
            else
                sm++;
        }
        int strength = cap - sm;
        
        if(strength > strongest_strength || (strength == strongest_strength && extension < strongest_extension)){
            strongest_strength = strength;
            strongest_extension = extension;
        }
    }

    return class_name + "." + strongest_extension;
}

int main() {
    assert(Strongest_Extension("Sp", {"671235", "Bb"}) == "Sp.671235");
    return 0;
}