#include <iostream>
#include <vector>
#include <string>
#include <cassert>

int Strongest_Extension(std::string class_name, std::vector<std::string> extensions){
    int max_strength = 0;
    std::string strongest_extension;

    for(auto extension : extensions){
        std::string strong_ext;
        for(auto c : extension){
            if(std::isupper(c)) strong_ext += std::to_string(c);
            else if(std::islower(c)) strong_ext += std::to_string(c);
        }
        int strength = strong_ext.length() - (int)strong_ext.convert_to_lower().length();
        if(strength > max_strength){
            max_strength = strength;
            strongest_extension = extension;
        }else if(strength == max_strength && std::strcmp(extension.c_str(), strongest_extension.c_str()) < 0){
            strongest_extension = extension;
        }
    }

    return class_name + "." + strongest_extension;
}

int main() {
    assert (Strongest_Extension("Sp", {"671235", "Bb"}) == "Sp.671235");
    return 0;
}