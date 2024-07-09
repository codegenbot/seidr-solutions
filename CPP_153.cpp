#include <iostream>
#include <vector>
#include <string>

int Strongest_Extension(std::string class_name, std::vector<std::string> extensions){
    int max_strength = 0;
    std::string strongest_extension;

    for(auto extension : extensions){
        int cap = 0, sm = 0;
        for(int i = 0; i < extension.length(); i++){
            if(std::isupper(extension[i]))
                cap++;
            else
                sm++;
        }
        int strength = cap - sm;
        if(strength > max_strength){
            max_strength = strength;
            strongest_extension = extension;
        }else if(strength == max_strength)
            strongest_extension = (strongest_extension < extension) ? strongest_extension : extension;
    }

    return class_name + "." + strongest_extension;
}

int main() {
    assert(Strongest_Extension("Sp", {"671235", "Bb"}) == "Sp.671235");
    return 0;
}